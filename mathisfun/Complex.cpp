#include "Complex.h"

#include <iostream>

Complex::Complex()
	:m_real(0), m_imaginary(0)
{}

Complex::Complex(double real, double imaginary)
	: m_real(real), m_imaginary(imaginary)
{}

double Complex::getReal() const {
	return m_real;
}

void Complex::setReal(double real) {
	m_real = real;
}

double Complex::getImaginary() const {
	return m_imaginary;
}

void Complex::setImaginary(double imaginary) {
	m_imaginary = imaginary;
}

bool Complex::operator==(const Complex& other) const {
	return m_real == other.m_real && m_imaginary == other.m_imaginary;
}

const Complex Complex::operator+(const Complex& other) const {
	return Complex(m_real + other.m_real, m_imaginary + other.m_imaginary);
}

const Complex Complex::operator-(const Complex& other) const {
	return Complex(m_real - other.m_real, m_imaginary - other.m_imaginary);
}

const Complex Complex::operator*(const Complex& other) const {
	double real_part = m_real * other.m_real - m_imaginary * other.m_imaginary;
	double imaginary_part = m_real * other.m_imaginary + m_imaginary * other.m_real;

	return Complex(real_part, imaginary_part);
}

void Complex::print() const {
	std::cout << m_real << " + " << m_imaginary << "i" << std::endl;
}
