#include "UnknownOperatorException.h"


UnknownOperatorException::UnknownOperatorException(char op)
	:m_operator(op)
{
	m_msg = "Unknown operator: " + std::string(1, m_operator);
}


const char* UnknownOperatorException::what() const noexcept {
	return m_msg.c_str();
}
