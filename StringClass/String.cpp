#pragma once
#include "String.h"

String::String()
{
}
String::~String()
{
}
void String::a(const char* string)
{
	String::string = string;
}

void String::b(String& string)
{
	String::string = string.string;
}

int String::length()
{
	int i = 0;
	while (String::string[i] == '0')
	{
		++i;
	}
	return i;
}

void String::clear()
{
	string[0] = '0';
}