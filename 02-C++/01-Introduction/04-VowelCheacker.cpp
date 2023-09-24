//__________________________________________________________//
//Name        : Basel Amr Barakat                           //
//Description : In this program we ask the user to enter a  //
//				character and we check if it is a vowel     //
//				character or not                			//
//Task_Number : 4                                           //    
//__________________________________________________________//
#include<iostream>
int main()
{
	unsigned char vowel_Chars[6] = { 'a','e','i','o','u','/0' };
	unsigned char character;
	bool Again = true;
	while (Again)
	{
		Again = false;
		std::cout << "Enter a character : ";
		std::cin >> character;
		for (int i = 0; i < 5; i++)
		{
			if (character == vowel_Chars[i])
			{
				Again = true;
				break;
			}
		
		}
		if (Again)
			std::cout << "The Character your have entered " << character << " is a vowel character" << std::endl;
		else
			std::cout << "The Character your have entered '"<< character << "' is not a vowel character" << std::endl;
		std::cout << "Want to try again press y : ";
		std::cin >> character;
		if (character == 'y')
		{
			Again = true;
		}
		else
		{
			Again = false;
			std::cout << "Terminating Program" << std::endl;
		}
	}
	return 0;
}