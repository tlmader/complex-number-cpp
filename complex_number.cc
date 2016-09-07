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
private:
  float a;
  float b;
};

std::ostream& operator<<(ostream& os, const Date& dt)
{
    os << dt.mo << '/' << dt.da << '/' << dt.yr;
    return os;
}
#endif
