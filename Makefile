CC=g++
CFLAGS=-std=c++11 -Wall -Wextra
TARGET=factorial

$(TARGET): main.o
	$(CC) $(CFLAGS) main.o -o $(TARGET)

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

clean:
	rm -f $(TARGET) main.o
