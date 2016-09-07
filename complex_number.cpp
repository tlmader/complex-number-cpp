#include <iostream>
#include "complex_number.hpp"
using namespace std;

ComplexNumber::ComplexNumber() {
  a = 0;
  b = 0;
}

ComplexNumber::ComplexNumber(float _a, float _b) {
  a = _a;
  b = _b;
}

ComplexNumber::ComplexNumber(const ComplexNumber &rhs) {
  a = rhs.a;
  b = rhs.b;
}

ComplexNumber ComplexNumber::operator+(const ComplexNumber& other) {
  ComplexNumber cn;
  cn.a = this->a + other.getA();
  cn.b = this->b + other.getB();
  return cn;
}

ostream& operator<<(ostream& os, const ComplexNumber& cn)
{
    os << cn.getA() << " + " << cn.getB() << "i";
    return os;
}
