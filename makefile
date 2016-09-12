#
# Makefile for csci4631-hw2
#
# Author: Ted Mader
# Date: 2016-09-07
#

CC = gcc
TARGETS = main

all: $(TARGETS)

main: complex_number.o main.o
	$(CC) -o main complex_number.o main.o -lstdc++

complex_number.o: complex_number.cpp
	$(CC) -c complex_number.cpp

main.o: main.cpp
	$(CC) -c main.cpp

clean:
	rm -rf *.o main
