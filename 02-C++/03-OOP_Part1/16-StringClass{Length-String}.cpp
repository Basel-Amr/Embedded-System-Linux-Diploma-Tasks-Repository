//_____________________________________________________________________________//
//Name        : Basel Amr Barakat                                              //
//Description : In this program We make a small string class that has two      //
//				members which are length and string							   //
//_____________________________________________________________________________//


#include <iostream>

class String {
private:
	char* str;
	unsigned int length;
public:
	//Defult Constructor
	String() :length(0) {
		str = new char[1];
		str[0] = '\0';
	}
	String(const char* s) {
		for (size_t i = 0; s[i] != '\0'; i++)
		{
			length++;
		}
		str = new char[length + 1];
		for (size_t i = 0; i < length; i++) {
			str[i] = s[i];
		}
		str[length] = '\0';
	}
	int getlength() {
		return length;
	}
	const char* getstring() {
		return str;
	}
	//Defult Destructor
	~String() { delete[] str; }
};


int main(int argc, const char** argv) {
	String emptrystring, string1("Basel Amr Barakat");
	std::cout << "The First String : " << std::endl;
	std::cout << "The Length : " << emptrystring.getlength() << std::endl;
	std::cout << "The String : " << emptrystring.getstring() << std::endl;
	std::cout << "_________________________________________________________" << std::endl;
	std::cout << "The Second String : " << std::endl;
	std::cout << "The Length : " << string1.getlength() << std::endl;
	std::cout << "The String : " << string1.getstring() << std::endl;
	return 0;
}