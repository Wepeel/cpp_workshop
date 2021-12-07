#pragma once
class Complex {
public:

	Complex();

	Complex(double real, double imaginary);

	double getReal() const;

	void setReal(double real);

	double getImaginary() const;

	void setImaginary(double imaginary);

	bool operator==(const Complex& other) const;

	const Complex operator+(const Complex& other) const;

	const Complex operator-(const Complex& other) const;

	const Complex operator*(const Complex& other) const;

	void print() const;


private:
	double m_real;
	double m_imaginary;
};