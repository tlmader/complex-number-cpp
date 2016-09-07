#include <iostream>
#include "complex_number.hpp"
using namespace std;

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
