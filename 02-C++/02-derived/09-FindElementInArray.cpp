//_____________________________________________________________________________//
//Name        : Basel Amr Barakat                                              //
//Description : In this program We ask the user to enter an array and enter    // 
//				a number and we check if the array contains that number or not //
//_____________________________________________________________________________//
#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

bool findNumber(std::vector<int> array,int number)
{
	int size = array.size();
	std::sort(array.begin(), array.end(), [](int x, int y) {return x < y; });
	return std::find(array.begin(), array.end(), number) != array.end();
}
int main() {
	std::vector<int> array;
	int  number_of_elements, number;
	bool isExist;
	std::cout << "Enter The Number Of Elements of Array : ";
	std::cin >> number_of_elements;
	std::cout << "Enter " << number_of_elements << " Elements " << std::endl;
	for (int i = 0; i < number_of_elements; i++)
	{
		std::cout << "Enter Number " << i + 1 << " : ";
		std::cin >> number;
		array.push_back(number);
	}

	std::cout << "Enter The Number You Want To Check its existance : ";
	std::cin >> number;
	isExist = findNumber(array, number);
	if (isExist) {
		std::cout << "The Number You Searched for is in the array " << std::endl;
	}
	else{
		std::cout << "The Number You Searched for does not exist in the array " << std::endl;
	}
	return 0;
}