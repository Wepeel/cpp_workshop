#include <iostream>


bool is_prime(int number) {
	if (number < 2) {
		return false;
	}

	for (int i = 2; i < number; ++i) {
		if (number % i == 0) {
			return false;
		}
	}

	return true;
}


int main() {
	int number;
	std::cout << "Please enter a number: ";
	std::cin >> number;

	if (!std::cin) {
		std::cout << "Failed to read number\n";
		return 1;
	}

	if (number < 0) {
		std::cout << "Number must be positive\n";
		return 1;
	}

	if (is_prime(number)) {
		std::cout << "Is prime\n";
	} else {
		std::cout << "Is not prime\n";
	}

	return 0;
}