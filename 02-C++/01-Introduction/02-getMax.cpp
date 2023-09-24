//_________________________________________________________________________//
//Name        : Basel Amr Barakat                                          //
//Description : In this program We ask the user to enter an array and we   // 
//				print the maximum number in the array			           //
//Task_Number : 2                                           			   //    
//_________________________________________________________________________//

#include <iostream>


int findMax(int array[])
{
	int size = sizeof(array) / sizeof(array[0]);
	std::sort(std::begin(array), std::end(array), [](int x, int y) {return x < y; });
	return array[size - 1];
}

int main() {
	int array[5], max_number;
	std::cout<<"Enter 5 Numbers in the array : ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Enter Number " << i + 1 << " : ";
		std::cin >> array[i];
	}
	max_number = findMax(array);
	std::cout << "The Maximum Number In The Array Is " << max_number << std::endl;
	return 0;
}