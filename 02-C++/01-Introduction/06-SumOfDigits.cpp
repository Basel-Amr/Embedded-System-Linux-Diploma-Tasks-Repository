//______________________________________________________________//
//Name        : Basel Amr Barakat                               //
//Description : In This Program we will get the summation		//
//				 the digits of integer entered by user			//
//Task_Number : 6		                                        //    
//______________________________________________________________//
#include<iostream>
void main()
{
	unsigned int number, sum = 0, reminder, divisor;
	unsigned char character = 'y';
	while(character == 'y')
	{
		sum = 0;
		std::cout << "Please Enter a Number : ";
		std::cin >> number;
		for (int divident = number; divident > 0; divident /= 10)
		{
			divisor = divident % 10;
			sum += divisor;
		}
		std::cout << "The Summition of the digits " << number << " = " << sum << std::endl;
		std::cout << "Want to try again ? Press Y : ";
		std::cin >> character;
		if (character != 'y')
			std::cout << "Terminating Program!" << std::endl;
	}

}