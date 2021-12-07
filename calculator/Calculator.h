#pragma once

class Calculator {
public:
	static double add(double first_number, double second_number);

	static double subtract(double first_number, double second_number);

	static double multiply(double first_number, double second_number);

	static double divide(double first_number, double second_number);

	static double calculate(double first_number, char op, double second_number);
};
