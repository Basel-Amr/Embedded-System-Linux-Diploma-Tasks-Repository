//_____________________________________________________________________________//
//Name        : Basel Amr Barakat                                              //
//Description : In this program We ask the user to enter an array and we make  //
//				make a function to check if there is an even number            //
//_____________________________________________________________________________//


#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

bool ifEven(std::vector<int> array)
{
	for (int i = 0; i < array.size(); i++) {
		if (array[i] % 2 == 0) {
			return true;
		}
	}
	return false;
}
int main(int argc, const char** argv) {
	std::vector<int> array;
	bool isEven = false;
	int Number_Of_Elements = 0, number;
	while (1) {
		std::cout << "Enter The Number Of Elemnts Of The Array : ";
		std::cin >> Number_Of_Elements;
		for (int i = 0; i < Number_Of_Elements; i++) {
			std::cout << "Enter Number " << i + 1 << " : ";
			std::cin >> number;
			array.push_back(number);
		}
		isEven = ifEven(array);
		if (isEven) {
			std::cout << "There is Even Number!" << std::endl;
		}
		else {
			std::cout << "There is Not Even Number! " << std::endl;
		}
	}
	return 0;
}