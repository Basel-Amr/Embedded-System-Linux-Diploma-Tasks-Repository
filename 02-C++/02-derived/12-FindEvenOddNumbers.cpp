//_____________________________________________________________________________//
//Name        : Basel Amr Barakat                                              //
//Description : In this program We ask the user to enter an array and we make  //
//				function that prints even and odd numbers		               //
//_____________________________________________________________________________//
#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

void findevenodd(std::vector<int> array)
{
	std::vector<int> even_array, odd_array;
	for (int i = 0; i < array.size(); i++)
	{
		if (array[i] % 2 == 0) {
			even_array.push_back(array[i]);
		}
		else {
			odd_array.push_back(array[i]);
		}
	}
	std::cout << "The Odd Numbers Are : ";
	for (int i = 0; i < odd_array.size(); i++)
	{
		std::cout << odd_array[i] << " ";
	}
	std::cout << "\nThe Even Numbers Are : ";
	for (int i = 0; i < even_array.size(); i++)
	{
		std::cout << even_array[i] << " ";
	}
	return;
}

int main(int argc, const char** argv) {
	std::vector<int> array;
	int  numberofelements, number;
	std::cout << "Enter The Number Of Elements of Array1 : ";
	std::cin >> numberofelements;

	for (int i = 0; i < numberofelements; i++)
	{
		std::cout << "Enter Number " << i + 1 << " : ";
		std::cin >> number;
		array.push_back(number);
	}

	findevenodd(array);
	return 0;
}