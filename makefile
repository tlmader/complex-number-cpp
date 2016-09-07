CC = clang
TARGETS = complex_number

all: $(TARGETS)

complex_number: complex_number.o complex_number_test.o
	$(CC) -o main complex_number.o complex_number_test.o -lstdc++

complex_number.o: complex_number.cc
	$(CC) -c complex_number.cc

complex_number_test.o: complex_number_test.cc
	$(CC) -c complex_number_test.cc

clean:
	rm -rf *.o main
