CC = clang
TARGETS = complex_number

all: $(TARGETS)

complex_number: complex_number.o complex_number_test.o
	$(CC) -o complex_number complex_number.o complex_number_test.o -lstdc++

complex_number.o: complex_number.cpp
	$(CC) -c complex_number.cpp

complex_number_test.o: complex_number_test.cpp
	$(CC) -c complex_number_test.cpp

clean:
	rm -rf *.o complex_number
