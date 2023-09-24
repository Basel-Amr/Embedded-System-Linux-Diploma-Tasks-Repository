//_____________________________________________________________________________//
//Name        : Basel Amr Barakat                                              //
//Description : In this program We ask the user to enter two arrays and we     // 
//				build a function that takes these two arrays and merge them in //
//				a single array												   //
//_____________________________________________________________________________//
#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

std::vector<int> operator + (std::vector<int> array1, std::vector<int> array2) {
	int size1 = array1.size(), size2 = array2.size(), size3 = size1 + size2;
	std::vector<int> mergedArray;
	for (int i = 0; i < size1; i++) {
		mergedArray.push_back(array1[i]);
	}
	for (int i = 0; i < size2; i++) {
		mergedArray.push_back(array2[i]);
	}
	return mergedArray;
}

int main() {
	std::vector<int> array1, array2, array3;
	int  numberofelements1, numberofelements2, number;
	std::cout << "Enter The Number Of Elements of Array1 : ";
	std::cin >> numberofelements1;

	for (int i = 0; i < numberofelements1; i++)
	{
		std::cout << "Enter Number " << i + 1 << " : ";
		std::cin >> number;
		array1.push_back(number);
	}

	std::cout << "Enter The Number Of Elements of Array2 : ";
	std::cin >> numberofelements2;
	for (int i = 0; i < numberofelements1; i++)
	{
		std::cout << "Enter Number " << i + 1 << " : ";
		std::cin >> number;
		array2.push_back(number);
	}
	array3 = array1 + array2;
	std::cout << "The Merged Array is " << std::endl;
	for (int i = 0; i < array3.size(); i++)
	{
		std::cout << array3[i] << " ";
	}
	std::cout << std::endl;
	return 0;
}