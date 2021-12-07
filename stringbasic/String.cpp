#include "String.h"

#include <cstring>
#include <iostream>

String::String()
{}

String::String(const char* string) {
	changeString(string);
}

String::String(const String& other) {
	(*this) = other;
}

String& String::operator=(const String& other) {
	if (this == &other) {
		return *this;
	}

	changeString(other.m_string_ptr);
	return *this;
}


String::~String() {
	resetString();
}

void String::changeString(const char* string) {
	resetString();

	size_t string_length = strlen(string);
	m_string_ptr = new char[string_length + 1]{ 0 };
	strncpy_s(m_string_ptr, string_length + 1, string, string_length);
}

void String::resetString() {
	delete[] m_string_ptr;
	m_string_ptr = nullptr;
}

const char* String::getString() const {
	return m_string_ptr;
}

bool String::operator==(const String& other) const {
	return strcmp(m_string_ptr, other.m_string_ptr) == 0;
}

void String::print() const {
	if (m_string_ptr == nullptr) {
		std::cout << std::endl;
		return;
	}
	std::cout << m_string_ptr << std::endl;
}
