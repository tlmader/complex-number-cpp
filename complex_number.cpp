#include <iostream>

#ifndef COMPLEX_NUMBER
#define COMPLEX_NUMBER
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

std::ostream& operator<<(std::ostream& os, const ComplexNumber& cn)
{
    os << cn.getA() << " + " << cn.getB() << "i";
    return os;
}
#endif
