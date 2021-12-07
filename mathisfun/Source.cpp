#include <iostream>

#include "Complex.h"


int main() {

	Complex empty;
	empty.print();

	Complex complex1(1, 2);
	complex1.print();
	(complex1 + empty).print();
	(complex1 - empty).print();
	(complex1 * empty).print();

	std::cout << "------------------------------" << std::endl;

	Complex complex2(2, 1);
	complex2.print();
	(complex1 + complex2).print();
	(complex1 - complex2).print();
	(complex1 * complex2).print();

	std::cout << "------------------------------" << std::endl;

	Complex real(2, 0);
	real.print();
	(complex1 + real).print();
	(complex1 - real).print();
	(complex1 * real).print();

	std::cout << "------------------------------" << std::endl;

	Complex imaginary(0, 1);
	imaginary.print();
	(complex1 + imaginary).print();
	(complex1 - imaginary).print();
	(complex1 * imaginary).print();

	std::cout << "------------------------------" << std::endl;

	Complex imaginary2(0, 1);
	imaginary2.print();
	if (imaginary == imaginary2) {
		std::cout << "Equals" << std::endl;
	} else {
		std::cout << "Not equals" << std::endl;
	}

	Complex imaginary3(0, 2);
	imaginary3.print();
	if (imaginary == imaginary3) {
		std::cout << "Equals" << std::endl;
	} else {
		std::cout << "Not equals" << std::endl;
	}

	return 0;
}