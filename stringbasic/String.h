#pragma once


// Heap allocated string with RAII
class String {
public:

	String();

	String(const char* string);

	String(const String&);

	String& operator=(const String&);

	String(String&&) = default;

	String& operator=(String&&) = default;

	~String();

	size_t size() const;

	char* substring(size_t index, size_t count);

	void replace(String substring, String new_substring);

	void insert(String str, size_t offset);

	void changeString(const char* string);

	void resetString();

	const char* getString() const;

	bool operator==(const String& other) const;

	void print() const;


private:

	void setStrongString(char* str);


private:
	char* m_string_ptr = nullptr;
};