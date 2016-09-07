#ifndef COMPLEX_NUMBER_H
#define COMPLEX_NUMBER_H
class ComplexNumber {
public:
  ComplexNumber();
  ComplexNumber(float a, float b);
  ComplexNumber(const ComplexNumber& rhs);
  ComplexNumber operator+(const ComplexNumber& other);
  ComplexNumber operator-(const ComplexNumber& other);
  ComplexNumber operator*(const ComplexNumber& other);
  ComplexNumber operator/(const ComplexNumber& other);
  double getA() const {
    return a;
  }
  void setA(float _a) {
    a = _a;
  }
  double getB() const {
    return b;
  }
  void setB(float _b) {
    b = _b;
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
