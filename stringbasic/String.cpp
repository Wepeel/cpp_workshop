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

size_t String::size() const {
	return strlen(m_string_ptr);
}

char* String::substring(size_t index, size_t count) {

	char* buffer = new char[count + 1];
	strncpy_s(buffer, count + 1, m_string_ptr + index, count);

	return buffer;
}

void String::replace(String substring, String new_substring) {
	//size_t number_of_occurences = 0;

	for (size_t i = 0; i < size() - substring.size(); ++i) {
		String to_check_string = this->substring(i, substring.size());
		if (to_check_string == substring) {
			insert(new_substring, i);
		}
	}

	/*int delta_length = static_cast<int>(substring.size()) - new_substring.size();
	size_t new_buffer_size = size() + number_of_occurences * delta_length + 1;

	char* new_buffer = new char[new_buffer_size];
	strncpy_s(new_buffer, new_buffer_size, m_string_ptr, size());


	for (size_t index = 0; index < size();) {
		if (this->substring(index, substring.size()) == substring) {
			strncat_s(new_buffer, new_buffer_size, new_substring.m_string_ptr, )
				index +=
		} else {
			++index;
		}
	}*/
}

void String::insert(String str, size_t offset) {
	const size_t new_buffer_size = size() + str.size() + 1;
	char* new_ptr = new char[new_buffer_size];
	strncpy_s(new_ptr, new_buffer_size, m_string_ptr, offset);
	strncat_s(new_ptr, new_buffer_size, str.m_string_ptr, str.size());
	strncat_s(new_ptr, new_buffer_size, m_string_ptr + offset, size() - offset);

	resetString();
	setStrongString(new_ptr);
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

void String::setStrongString(char* str) {
	m_string_ptr = str;
}
