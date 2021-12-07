#include "Source.h"

#include <iostream>


bool isPrime(unsigned number) {
	if (number == 0 || number == 1) {
		return false;
	}

	for (int i = 2; i < std::sqrt(number); ++i) {
		if (number % i == 0) {
			return false;
		}
	}

	return true;
}


int main() {
	unsigned number;
	std::cout << "Please enter a number: ";
	std::cin >> number;

	if (!std::cin) {
		std::cout << "Failed to read number" << std::endl;
		return 1;
	}

	if (number < 0) {
		std::cout << "Number must be positive" << std::endl;
		return 1;
	}

	if (isPrime(number)) {
		std::cout << "Is prime" << std::endl;
	}
	else {
		std::cout << "Is not prime" << std::endl;
	}

	return 0;
}