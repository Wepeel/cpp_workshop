#include <iostream>

#include "Calculator.h"
#include "DivisionByZeroException.h"
#include "UnknownOperatorException.h"


int main() {

	std::cout << "2 + 3 is " << Calculator::add(2, 3) << std::endl;
	std::cout << "2 - 3 is " << Calculator::subtract(2, 3) << std::endl;
	std::cout << "2 * 3 is " << Calculator::multiply(2, 3) << std::endl;
	std::cout << "2 / 3 is " << Calculator::divide(2, 3) << std::endl;

	std::cout << "2 + 3 is " << Calculator::calculate(2, '+', 3) << std::endl;
	std::cout << "2 - 3 is " << Calculator::calculate(2, '-', 3) << std::endl;
	std::cout << "2 * 3 is " << Calculator::calculate(2, '*', 3) << std::endl;
	std::cout << "2 / 3 is " << Calculator::calculate(2, '/', 3) << std::endl;

	try {
		std::cout << "2 / 0 is " << Calculator::divide(2, 0) << std::endl;
	}
	catch (DivisionByZeroException& exception) {
		std::cout << exception.what() << std::endl;
	}

	try {
		std::cout << "2 / 0 is " << Calculator::calculate(2, '/', 0) << std::endl;
	}
	catch (DivisionByZeroException& exception) {
		std::cout << exception.what() << std::endl;
	}

	try {
		std::cout << "2 ^ 3 is " << Calculator::calculate(2, '^', 3) << std::endl;
	}
	catch (UnknownOperatorException& exception) {
		std::cout << exception.what() << std::endl;
	}

	return 0;
}