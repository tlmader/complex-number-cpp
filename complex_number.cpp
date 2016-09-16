/**
 * Implements functions for ComplexNumbers.
 * @author Ted Mader
 * @date 2016-09-07
 */
 
#include "complex_number.hpp"
#include <iostream>

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

ComplexNumber ComplexNumber::operator-(const ComplexNumber& other) {
  ComplexNumber cn;
  cn.a = this->a - other.getA();
  cn.b = this->b - other.getB();
  return cn;
}

ComplexNumber ComplexNumber::operator*(const ComplexNumber& other) {
  ComplexNumber cn;
  cn.a = (this->a * other.getA()) - (this->b * other.getB());
  cn.b = (this->b * other.getA()) + (this->a * other.getB());
  return cn;
}

ComplexNumber ComplexNumber::operator/(const ComplexNumber& other) {
  ComplexNumber cn;
  float denominator = ((other.getA() * other.getA()) + (other.getB() * other.getB()));
  cn.a = ((this->a * other.getA()) + (this->b * other.getB())) / denominator;
  cn.b = ((this->b * other.getA()) - (this->a * other.getB())) / denominator;
  return cn;
}

double ComplexNumber::getA() const {
  return a;
}

void ComplexNumber::setA(float _a) {
  a = _a;
}

double ComplexNumber::getB() const {
  return b;
}

void ComplexNumber::setB(float _b) {
  b = _b;
}

std::ostream& operator<<(std::ostream& os, const ComplexNumber& cn)
{
  os << cn.getA() << " + " << cn.getB() << "i";
  return os;
}
