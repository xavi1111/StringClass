#pragma once

class String
{
public:

	String();
	~String();

	void a(const char* string);
	void b(String& string);
	int length();
	void clear();

private:
	const char* string;
};