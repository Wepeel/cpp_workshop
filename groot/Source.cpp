#include <iostream>


int main() {

	int user_input = 0;
	std::cout << "Please enter a number: ";
	std::cin >> user_input;

	if (user_input < 0) {
		std::cout << "Number cannot be negative";
		return 1;
	}

	double sqrt = std::sqrt(user_input);
	std::cout << "The square root of " << user_input << " is " << sqrt << std::endl;

	return 0;
}