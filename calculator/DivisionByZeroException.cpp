#include "DivisionByZeroException.h"

const char* DivisionByZeroException::what() const noexcept {
	return "Attempt to divide by zero";
}