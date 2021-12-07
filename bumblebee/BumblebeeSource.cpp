#include <iostream>


bool is_prime(int number) {
	if (number < 2) {
		return false;
	}

	for (int i = 2; i <= std::sqrt(number); ++i) {
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

	unsigned array_size = 0;
	std::cout << "Please enter the amount of primes to print: ";
	std::cin >> array_size;
	if (!std::cin) {
		std::cout << "Error reading number of primes. Was the number positive?" << std::endl;
	}

	int* prime_array = new int[array_size];
	fill_in_prime_array(prime_array, array_size);

	for (unsigned i = 0; i < array_size; ++i) {
		std::cout << prime_array[i] << " ";
	}

	std::cout << std::endl;

	delete[] prime_array;

	return 0;
}