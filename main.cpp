#include "complex_number.hpp"
#include <iostream>

void printSuccess() {
  std::cout << "SUCCESS" << std::endl;
}

void printFailure() {
  std::cout << "FAILURE" << std::endl;
}

void testAdd() {
  ComplexNumber cn1(1, 1);
  ComplexNumber cn2(1, 1);
  ComplexNumber cn = cn1 + cn2;
  std::cout << cn << std::endl;
  if (cn.getA() == 2 && cn.getB() == 2) {
    printSuccess();
  } else {
    printFailure();
  }
}

void testSubtract() {
  ComplexNumber cn1(1, 1);
  ComplexNumber cn2(1, 1);
  ComplexNumber cn = cn1 - cn2;
  std::cout << cn << std::endl;
  if (cn.getA() == 0 && cn.getB() == 0) {
    printSuccess();
  } else {
    printFailure();
  }
}

void testMultiply() {
  ComplexNumber cn1(1, 1);
  ComplexNumber cn2(1, 1);
  ComplexNumber cn = cn1 * cn2;
  std::cout << cn << std::endl;
  if (cn.getA() == 0 && cn.getB() == 2) {
    printSuccess();
  } else {
    printFailure();
  }
}

void testDivide() {
  ComplexNumber cn1(1, 1);
  ComplexNumber cn2(1, 1);
  ComplexNumber cn = cn1 / cn2;
  std::cout << cn << std::endl;
  if (cn.getA() == 1 && cn.getB() == 0) {
    printSuccess();
  } else {
    printFailure();
  }
  ComplexNumber cn3(2, 6);
  ComplexNumber cn4(2, 2);
  cn = cn3 / cn4;
  std::cout << cn << std::endl;
  if (cn.getA() == 2 && cn.getB() == 1) {
    printSuccess();
  } else {
    printFailure();
  }
}

int main(int argc, char *argv[]) {
  testAdd();
  testSubtract();
  testMultiply();
  testDivide();
}
