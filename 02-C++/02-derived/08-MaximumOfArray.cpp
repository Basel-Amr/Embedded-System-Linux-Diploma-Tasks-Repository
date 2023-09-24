//_________________________________________________________________________//
//Name        : Basel Amr Barakat                                          //
//Description : In this program We ask the user to enter an array and we   // 
//				print the maximum number in the array			           //
//_________________________________________________________________________//
#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

int findMax(std::vector<int> array)
{
	int size = array.size();
	std::sort(array.begin(), array.end(), [](int x, int y) {return x < y; });
	
	return array[size - 1];
}
int main() {
	std::vector<int> array;
	int max_number, number_of_elements, number;
	std::cout << "Enter The Number Of Elements of Array : "; 
	std::cin >> number_of_elements;
	std::cout << "Enter " << number_of_elements << " Elements " << std::endl;
	for (int i = 0; i < number_of_elements; i++)
	{
		std::cout << "Enter Number " << i+1 << " : ";
		std::cin >> number;
		array.push_back(number);
	}

	std::cout << "\nVector elements are: ";
	for (auto it = array.begin(); it != array.end(); it++)
		std::cout << *it << " ";
	max_number = findMax(array);
	std::cout << "The Maximum Number In The Array Is " << max_number << std::endl;
	return 0;
}