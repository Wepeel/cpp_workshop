#include "UnknownOperatorException.h"

const char* UnknownOperatorException::what() const noexcept {
	return "Unknown Operator";
}
