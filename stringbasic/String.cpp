#include "String.h"

#include <cstring>

String::String()
{}

String::String(const char* string) {
	changeString(string);
}

String::String(const String& other) {
	changeString(other.m_string_ptr);
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
