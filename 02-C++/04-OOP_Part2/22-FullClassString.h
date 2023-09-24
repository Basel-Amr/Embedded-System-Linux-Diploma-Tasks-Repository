//A string is a class that defines objects that be represented as a stream of characters.
//String class defines a number of functionalities that allow manifold operations on strings.
#include<iostream>
#pragma once
class String
{
	char* str;
	unsigned int length;
	static unsigned int counter;
	unsigned int id;
public:
	//Default Constructor
	String();
	String(const char* newstring);
	String(const String& newstring);
	char* get_str();
	

	//Operators Not Tested
	void operator =(const String& newstring);
	String& operator +(const String& newstring);
	String& operator -(const String& newstring);

	void operator =(const char* newstring);
	String& operator +(const char* newstring);
	//void operator -(const char* newstring);

	bool operator==(const String& newstring) const;
	
	
	//	1)Input Functions 
	void get_line(const char* character);		//This function is used to store a stream of characters as entered by the user in the object memory.
	void push_back(const char character);		//This function is used to input a character at the end of the string.
	char pop_back();			       			//This function is used to delete the last character from the string and return it. 

	//	2)Capacity Functions
	void resize(unsigned int size);				//This function changes the size of the string, the size can be increased or decreased.
	unsigned int get_len();						//This function finds the length of the string.

	//  3) Manipulating Functions :
	//There is a Problem
	void copy(char* character, unsigned int len, unsigned int position);			//This function copies the substring in the target character array mentioned in its arguments. It takes 3 arguments, target char array, length to be copied, and starting position in the string to start copying.
	void swap(String& string1);			//This function swaps one string with another



	~String();
};

