#include <iostream>
#include <unordered_map>

using namespace std;
unordered_map<int, long long> mapa;

long long factorial(int);

int main(int argc, char* argv[]) {
	if(argc != 2) {
		cout << "YOU ENTER MORE THAN 1 ARG" << endl;
		return 0;
	}
	if(stoi(argv[1]) < 0 || stoi(argv[1]) > 20) {
		cout << "PLEASE ENTER ARG MORE THAN -1 AND LESS THAN 20" << endl;
		return 0;
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


