#ifndef complex_number_h
#define complex_number_h

#include <iostream>

class ComplexNumber {
public:
  ComplexNumber();
  ComplexNumber(float a, float b);
  ComplexNumber(const ComplexNumber& rhs);
  ComplexNumber operator+(const ComplexNumber& other);
  ComplexNumber operator-(const ComplexNumber& other);
  ComplexNumber operator*(const ComplexNumber& other);
  ComplexNumber operator/(const ComplexNumber& other);
  double getA() const;
  void setA(float _a);
  double getB() const;
  void setB(float _b);
  friend std::ostream& operator<<(std::ostream& os, ComplexNumber const& cn);
private:
  float a;
  float b;
};
#endif
