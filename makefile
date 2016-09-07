CC = clang
TARGETS = complex_number

all: $(TARGETS)

main: complex_number.o main.o
	$(CC) -o complex_number complex_number.o main.o -lstdc++

complex_number.o: complex_number.cpp
	$(CC) -c complex_number.cpp

main.o: main.cpp
	$(CC) -c main.cpp	

clean:
	rm -rf *.o main
