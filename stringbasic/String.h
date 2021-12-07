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

	void changeString(const char* string);

	void resetString();

	const char* getString() const;

	bool operator==(const String& other) const;

	void print() const;


private:
	char* m_string_ptr = nullptr;
};