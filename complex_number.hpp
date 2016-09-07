#ifndef COMPLEX_NUMBER_H
#define COMPLEX_NUMBER_H

class ComplexNumber {
public:
  ComplexNumber();
  ComplexNumber(float a, float b);
  ComplexNumber(const ComplexNumber& rhs);
  ComplexNumber operator+(const ComplexNumber& otherNumber);
  ComplexNumber operator-(const ComplexNumber& otherNumber);
  ComplexNumber operator*(const ComplexNumber& otherNumber);
  ComplexNumber operator/(const ComplexNumber& otherNumber);
  double getA() const {
    return a;
  }
  double getB() const {
    return b;
  }
private:
  float a;
  float b;
};
#endif
