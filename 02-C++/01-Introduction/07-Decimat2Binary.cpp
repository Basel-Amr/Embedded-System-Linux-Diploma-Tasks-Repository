//______________________________________________________________//
//Name        : Basel Amr Barakat                               //
//Description : In This Program we will convert decimial		//
//				to binary format and vice versa					//
//Task_Number : 7		                                        //    
//______________________________________________________________//
//In This Program we will get the summation the digits of integer entered by user
#include<iostream>
#include<iomanip>
#include <bitset>
void main()
{
	unsigned int number = 0;
	unsigned char character = 'y';
	unsigned char choice;
	while (character == 'y')
	{
		std::cout << "Press d for decimal format     b for binary formate : ";
		std::cin >> choice;
		if (choice == 'd')
		{
			std::cout << "Enter Your Number in Decimal Formate : ";
			std::cin >> number;
			std::cout << "Decimal Formate : " << std::hex<<number<< std::endl;
			std::cout << "Binary Formate : " << std::bitset<8>{number} << std::endl;
		}
		else if (choice == 'b')
		{
			std::cout << "Enter Your Number in binary Formate : ";
			std::cin >> number;
			std::cout << "Decimal Formate : " << std::hex << number << std::endl;
			std::cout << "Binary Formate : " << number << std::endl;
		}
		else
			std::cout << "Wrong Formate! Try again";
		 //to binary
		std::cout << "If you want to try again press y : ";
		std::cin >> character;
		if (character != 'y')
			std::cout << "Terminating Program!" << std::endl;
	}

}