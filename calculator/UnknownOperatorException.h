#pragma once

#include <exception>
#include <string>

class UnknownOperatorException : public std::exception {
public:

	UnknownOperatorException(char op);

	const char* what() const noexcept;


private:
	char m_operator;
	std::string m_msg;
};
