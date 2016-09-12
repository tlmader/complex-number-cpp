#ifndef complex_number_h
#define complex_number_h

#include <iostream>

/**
 * Contains function declarations for ComplexNumbers.
 * @author Ted Mader
 * @date 2016-09-07
 */
class ComplexNumber {
public:
  /**
   * Returns a constructed ComplexNumber with values set to 0.
   */
  ComplexNumber();
  /**
   * Returns a constructed C ComplexNumber with given values.
   */

  ComplexNumber(float a, float b);

  /**
   * Returns a copy of this ComplexNumber.
   */
  ComplexNumber(const ComplexNumber& rhs);

  /**
   * Overrides the + operator and adds two ComplexNumbers and returns the result.
   */
  ComplexNumber operator+(const ComplexNumber& other);

  /**
   * Overrides the - operator and subtracts two ComplexNumbers and returns the result.
   */
  ComplexNumber operator-(const ComplexNumber& other);

  /**
   * Overrides the * operator and multiplies two ComplexNumbers and returns the result.
   */
  ComplexNumber operator*(const ComplexNumber& other);

  /**
   * Overrides the / operator and divides two ComplexNumbers and returns the result.
   */
  ComplexNumber operator/(const ComplexNumber& other);

  /**
   * Returns the a value of this ComplexNumber.
   */
  double getA() const;

  /**
   * Sets the a value of this ComplexNumber.
   */
  void setA(float _a);

  /**
   * Returns the b value of this ComplexNumber.
   */
  double getB() const;

  /**
   * Sets the b value of this ComplexNumber.
   */
  void setB(float _b);

  /**
   * Overrides the << operator and returns a string representing this ComplexNumber
   */
  friend std::ostream& operator<<(std::ostream& os, ComplexNumber const& cn);
private:
  float a;
  float b;
};
#endif
