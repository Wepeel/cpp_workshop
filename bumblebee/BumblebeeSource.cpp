#include "BumblebeeSource.h"

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

void fill_in_prime_array(int prime_array[], int number_of_primes) {
	for (int prime_counter = 0, current_number = 2; prime_counter < number_of_primes; ++current_number) {
		if (is_prime(current_number)) {
			prime_array[prime_counter++] = current_number;
		}
	}
}

int main() {
	int prime_array[ARRAY_SIZE]{ 0 };
	fill_in_prime_array(prime_array, ARRAY_SIZE);

	for (int i = 0; i < ARRAY_SIZE; ++i) {
		std::cout << prime_array[i] << " ";
	}

	std::cout << std::endl;

	return 0;
}