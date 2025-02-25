#include <iostream>
#include <unordered_map>

using namespace std;
unordered_map<int, long long> mapa;

long long factorial(int);

int main(int argc, char* argv[]) {
	if(argc != 2) {
		cerr << "YOU ENTER MORE THAN 2 ARGS" << endl;
		return 1;
	}
	if(stoi(argv[1]) < 0) {
		cerr << "PLEASE ENTER ARG MORE THAN -1" << endl;
		return 1;
	}
	cout << factorial(stoi(argv[1])) << endl;
	return 0;
}

long long factorial(int n){
	if (n == 0) 
		return 1;
	if(mapa.find(n) != mapa.end())
		return mapa[n];
	mapa[n] = n * factorial(n-1);
	return mapa[n];
}


