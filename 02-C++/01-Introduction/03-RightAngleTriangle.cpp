//__________________________________________________________//
//Name        : Basel Amr Barakat                           //
//Description : In this program we ask the user to enter the//
//				three sides of the triangle and we check if //
//				it can be right angle triangle or not       //
//Task_Number : 3                                           //    
//__________________________________________________________//
#include<iostream>
#include<vector>

int main()
{
	while(1)
	{
		unsigned int a, b, c;
		std::cout << "Enter The Three Sides Of The Triangle : ";
		std::cin >> a >> b >> c;
		if (c * c == (a * a + b * b))
			std::cout << "The Triangle is Right Angle Triangle" << std::endl;
		else
			std::cout << "The Triangle is not Right Angle Triangle" << std::endl;
	}
	return 0;
}