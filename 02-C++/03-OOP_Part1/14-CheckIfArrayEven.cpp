//_____________________________________________________________________________//
//Name        : Basel Amr Barakat                                              //
//Description : In this program We ask the user to enter an array and we make  //
//				make a function to check if all the elements is even or not    //
//_____________________________________________________________________________//

#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

bool ifEven(std::vector<int> array)
{
	for (int i = 0; i < array.size(); i++) {
		if (array[i] % 2 != 0) {
			return false;
		}
	}
	return true;
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
			std::cout << "All The Elements Of The Array Are Even!" << std::endl;
		}
		else {
			std::cout << "All The Elements Of The Array Are not Even!" << std::endl;
		}
	}
	return 0;
}