#include "Calculator.h"

#include "DivisionByZeroException.h"
#include "UnknownOperatorException.h"

double Calculator::add(double first_number, double second_number) {
	return first_number + second_number;
}

double Calculator::subtract(double first_number, double second_number) {
	return first_number - second_number;
}

double Calculator::multiply(double first_number, double second_number) {
	return first_number * second_number;
}

double Calculator::divide(double first_number, double second_number) {
	if (second_number == 0.0) {
		throw DivisionByZeroException();
	}

	return first_number / second_number;
}

double Calculator::calculate(double first_number, char op, double second_number) {

	switch (op)
	{
	case '+':
		return add(first_number, second_number);
	case '-':
		return subtract(first_number, second_number);
	case '*':
		return multiply(first_number, second_number);
	case '/':
		return divide(first_number, second_number);
	default:
		throw UnknownOperatorException();
	}
}