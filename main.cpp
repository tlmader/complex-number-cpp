#include "complex_number.hpp"
#include <iostream>

/**
 * Contains the main function tests for overloaded operator functions in
 * ComplexNumber.
 * @author Ted Mader
 * @date 2016-09-07
 */

/**
 * Prints success message.
 */
void printSuccess() {
  std::cout << "SUCCESS" << std::endl;
}

/**
 * Prints failure message.
 */
void printFailure() {
  std::cout << "FAILURE" << std::endl;
}

/**
 * Tests overloaded add operator function using ComplexNumber entities with
 * different values.
 */
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
  ComplexNumber cn3(4, 8);
  ComplexNumber cn4(2, 4);
  cn = cn3 + cn4;
  std::cout << cn << std::endl;
  if (cn.getA() == 6 && cn.getB() == 12) {
    printSuccess();
  } else {
    printFailure();
  }
}

/**
 * Tests overloaded subtract operator function using ComplexNumber entities with
 * different values.
 */
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
  ComplexNumber cn3(4, 8);
  ComplexNumber cn4(2, 4);
  cn = cn3 - cn4;
  std::cout << cn << std::endl;
  if (cn.getA() == 2 && cn.getB() == 4) {
    printSuccess();
  } else {
    printFailure();
  }
}

/**
 * Tests overloaded multiply operator function using ComplexNumber entities with
 * different values.
 */
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
  ComplexNumber cn3(2, 2);
  ComplexNumber cn4(4, 2);
  cn = cn3 * cn4;
  std::cout << cn << std::endl;
  if (cn.getA() == 4 && cn.getB() == 12) {
    printSuccess();
  } else {
    printFailure();
  }
}

/**
 * Tests overloaded divide operator function using ComplexNumber entities with
 * different values.
 */
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

/**
 * Called at program startup
 *
 * @param argc the number of arguments
 * @param argv the array of arguments
 */
int main(int argc, char *argv[]) {
  testAdd();
  testSubtract();
  testMultiply();
  testDivide();
}
