//______________________________________________________________//
//Name        : Basel Amr Barakat                               //
//Description : In this program Will print the multiplication	//
//				table of the numbers from 0 -> 9                //
//Task_Number : 5		                                        //    
//______________________________________________________________//
#include<iostream>
int main()
{
	unsigned int num;
	unsigned char character;
	bool Again = true;
	
	while (Again)
	{
		std::cout << "Welcome to our program ";

		std::cout << "Enter a Number : ";
		std::cin >> num;
		std::cout << "The Multiplication Table of Number " << num << " is " << std::endl;
		for (int i = 0; i <= 9; i++)
		{
			std::cout << num << "  x  " << i << "  =  " << (num * i) << std::endl;
		}
		std::cout << "Want to try again ? Press y : ";
		std::cin >> character;
		if (character == 'y')
		{
			Again = true;
		}
		else
		{
			Again = false;
			std::cout << "Terminating Program " << std::endl;
		}
	}
	return 0;
}