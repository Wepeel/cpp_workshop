#pragma once


class String {
public:

	String();

	String(const char* string);

	String(const String&);

	~String();

	void changeString(const char* string);

	void resetString();

	const char* getString() const;

	bool operator==(const String& other) const;


private:
	char* m_string_ptr = nullptr;
};