#include <iostream>


int main() {
	int user_input = 0;
	std::cout << "Please enter a number: ";
	std::cin >> user_input;

	if (!std::cin) {
		std::cout << "Error with reading input. Did you enter a number?\n";
		return 1;
	}

	if (user_input < 0) {
		std::cout << "Number cannot be negative\n";
		return 1;
	}

	double square_root = std::sqrt(user_input);
	std::cout << "The square root of " << user_input << " is " << square_root << std::endl;

	return 0;
}