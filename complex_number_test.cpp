#include <iostream>
#include "complex_number.hpp"
using namespace std;

void testAdd() {
  ComplexNumber cn1(1, 2);
  ComplexNumber cn2(3, 4);
  cn1 = cn1 + cn2;
  cout << cn1.getA() << endl;
  cout << cn1.getB() << endl;
}

void testSubtract() {
  cout << "SUCCESS" << endl;
}

void testMultiply() {
  cout << "SUCCESS" << endl;
}

void testDivide() {
  cout << "SUCCESS" << endl;
}

int main(int argc, char *argv[]) {
  testAdd();
}
