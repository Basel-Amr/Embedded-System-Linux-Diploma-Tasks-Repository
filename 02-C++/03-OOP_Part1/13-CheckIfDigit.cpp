//_____________________________________________________________________________//
//Name        : Basel Amr Barakat                                              //
//Description : In this program We ask the user to enter a character and we    //
//				make a function to check if the character was digit or not	   //
//_____________________________________________________________________________//

#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
//In C Concept
bool isDigit_c(char ch)
{
	if (ch >= '0' && ch <= '9') {
		return true;
	}
	else {
		return false;
	}
}
int main(int argc, const char** argv) {
	int digit;
	char digit_c;
	while (1) {
		std::cout << "Enter a integer : ";
		std::cin >> digit;
		if (std::isdigit(digit)) {
			std::cout << "You Have Entered a digit ! " << std::endl;
		}
		else {
			std::cout << "You Have not Entered a digit ! " << std::endl;
		}
		std::cout << "Enter a character : ";
		std::cin >> digit_c;
		if (isDigit_c(digit_c)) {
			std::cout << "You Have Entered a digit ! " << std::endl;
		}
		else {
			std::cout << "You Have not Entered a digit ! " << std::endl;
		}
	}
	return 0;
}