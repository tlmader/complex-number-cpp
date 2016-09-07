#include <iostream>
#include "complex_number.hpp"

void testAdd() {
  ComplexNumber cn1(1, 2);
  ComplexNumber cn2(3, 4);
  ComplexNumber cn = cn1 + cn2;
  std::cout << cn << std::endl;
}
//
// void testSubtract() {
//   cout << "SUCCESS" << endl;
// }
//
// void testMultiply() {
//   cout << "SUCCESS" << endl;
// }
//
// void testDivide() {
//   cout << "SUCCESS" << endl;
// }

int main(int argc, char *argv[]) {
  testAdd();
}
