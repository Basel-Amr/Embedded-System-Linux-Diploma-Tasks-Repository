
#include "String.h"
unsigned int String::counter = 0;
String::String() :length(0),id(++counter) {
	str = new char[1];
	str[0] = '\0';
}

String::String(const char* newstring):id(++counter)
{
	for (size_t i = 0; newstring[i] != '\0'; i++) {
		length++;
	}
	str = new char[length + 1];
	for (size_t i = 0; i < length; i++) {
		str[i] = newstring[i];
	}
	str[length] = '\0';
}

String::String(const String& newstring) :id(++counter)
{
	this->length = newstring.length;
	this->str = new char[this->length+1];
	for (size_t i = 0; i < this->length; i++) {
		this->str[i] = newstring.str[i];
	}
	str[length] = '\0';
}

char* String::get_str()
{
	return str;
}


void String::operator=(const String& newstring)
{
	this->length = newstring.length;
	delete[] this->str;
	this->str = new char[this->length + 1];
	for (size_t i = 0; i < this->length; i++) {
		this->str[i] = newstring.str[i];
	}
	//this->length = 0;
	//delete[] this->str;
}

String& String::operator+(const String& newstring)
{
	String otherstring;
	--counter;
	otherstring.length = this->length + newstring.length;
	otherstring.str = new char[otherstring.length + 1];
	std::cout << std::endl;
	for (size_t i = 0; i < this->length; i++) {
		otherstring.str[i] = this->str[i];
	}
	std::cout << std::endl;
	for (size_t i = this->length; i < otherstring.length; i++) {
		otherstring.str[i] = newstring.str[i-this->length];
	}
	otherstring.str[otherstring.length] = '\0';
	return otherstring;
}

String& String::operator-(const String& newstring)
{
	// TODO: insert return statement here
	String otherstring;
	--counter;
	return otherstring;
}

void String::operator=(const char* newstring)
{
	std::cout << "Testing Operator = with char paramter" << std::endl;
	this->length = 0;
	std::cout << "The String was : " << this->str << std::endl;
	std::cout << "The Copied String is : " << newstring << std::endl;
	delete[] this->str;
	for (size_t i = 0; newstring[i] != '\0'; i++) {
		this->length++;
	}
	this->str = new char[this->length + 1];
	for (size_t i = 0; i < this->length; i++) {
		str[i] = newstring[i];
	}
	str[this->length] = '\0';
	std::cout << "The String is : " << this->str << std::endl << "With Length " << this->length << std::endl;
}

String& String::operator+(const char* newstring)
{
	String otherstring;
	--counter;
	unsigned int otherlength(0);
	for (size_t i = 0; newstring[i] != '\0'; i++) {
		otherlength++;

	}
	otherstring.length = this->length + otherlength;
	otherstring.str = new char[otherstring.length + 1];
	for (size_t i = 0; i < this->length; i++) {
		otherstring.str[i] = this->str[i];
	}
	for (size_t i = 0; i < otherlength; i++) {
		otherstring.str[this->length + i] = newstring[this->length + i];
	}
	otherstring.str[otherstring.length] = '\0';
	std::cout << "Just For Test : " << otherstring.str << std::endl;
	return otherstring;
}

bool String::operator==(const String& newstring) const
{
	if (this->length != newstring.length) {
		return false;
	}
	else {
		for (size_t i = 0; i < this->length; i++) {
			if (this->str[i] != newstring.str[i]) {
				return false;
			}
		}
		return true;
	}
}

//This function is used to store a stream of characters as entered by the user in the object memory.
void String::get_line(const char* character){
	this->length = 0;
	delete[] this->str;
	for (size_t i = 0; character[i] != '\0'; i++) {
		this->length++;
	}
	this->str = new char[this->length + 1];
	for (size_t i = 0; character[i] != '\0'; i++) {
		(this->str)[i] = character[i];
	}
	(this->str[this->length]) = '\0';
	return;
}
//This function is used to input a character at the end of the string.
void String::push_back(const char character)
{
	char* newstr = new char[this->length+2];
	for (int i = 0; i < this->length; i++) {
		newstr[i] = this->str[i];
	}
	newstr[this->length++] = character;
	newstr[this->length] = '\0';
	delete[] this->str;
	this->str = newstr;
	return;
}
//This function is used to delete the last character from the string and return it. 
char String::pop_back()
{
	if (this->str[0] == '\0') {
		return '\0';
	}
	else {
		char* newstr = new char[this->length];
		char last_character = str[--this->length];

		for (size_t i = 0; i < this->length; i++) {
			newstr[i] = str[i];
		}
		newstr[this->length] = '\0';
		delete[] this->str;
		str = newstr;
		return last_character;
	}
}
//This function changes the size of the string, the size can be increased or decreased.
void String::resize(unsigned int size){

	if (this->length > size) {
		char* newstr = new char[size + 1];
		for (size_t i = 0; i < size; i++) {
			newstr[i] = this->str[i];
		}
		newstr[size] = '\0';
		delete[] this->str;
		this->str = newstr;
	}
	return;
}
//This function finds the length of the string.
unsigned int String::get_len()
{
	return this->length;
}
//This function copies the substring in the target character array mentioned in its arguments. It takes 3 arguments, target char array, length to be copied, and starting position in the string to start copying.
void String::copy(char* character, unsigned int len, unsigned int position)
{
	if (position > this->length) {
		std::cout << "Error Position is Out of the string ! The String contains only " << this->length << " Charcters" << std::endl;
	}
	else if (position + len > this->length) {
		unsigned int sizeOfChar = (this->length - position);
		std::cout << "Error Trying To Access Out Of The String" << std::endl;
		std::cout << "Copying Only " << (sizeOfChar) << " Characters" << std::endl;
		character = new char[sizeOfChar + 1];
		for (size_t i = 0; i < sizeOfChar; i++) {
			character[i] = this->str[position + i];
		}
		character[sizeOfChar] = '\0';
	}
	else {
		character = new char[len+1];
		for (size_t i = 0; i < len; i++) {
			character[i] = this->str[position + i];
			std::cout<< this->str[position + i];
		}
		character[len] = '\0';
	}
}
//This function swaps one string with another
void String::swap(String& string1)
{
	char* SwapPointer = string1.str;
	unsigned int SwapLength = string1.length;
	string1.str = this->str;
	string1.length = this->length;
	this->str = SwapPointer;
	this->length = SwapLength;
}

String::~String()
{
	std::cout << "Deleting The String "<<this->id << std::endl;
	--counter;
	this->length = 0;
	delete[] this->str;
}



