//_____________________________________________________________________________//
//Name        : Basel Amr Barakat                                              //
//Description : In this program We ask the user to enter an array and enter    // 
//				a number and we delete it from the array                       //
//_____________________________________________________________________________//
#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

int findIndex(std::vector<int> array, int number)
{
	int size = array.size(), index = -1;
	for (int i = 0; i < size; i++) {
		if (array[i] == number) {
			index = i;
			break;
		}
	}
	return index;
}
bool deleteNumber (std::vector<int> &array, int number) {
	int index, size;
	size = array.size();
	index = findIndex(array, number);

	std::cout << std::endl;
	if (index == -1) {
		
		return false;
	}
	else {
		size--;
		for (int i = index; i < size; i++) {
			array[i] = array[i + 1];
		}
		array.resize(size);
	}
	//Cjeck if the number exists again
	deleteNumber(array, number);
	return true;
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

	std::cout << "Enter The Number You Want To Delete : ";
	std::cin >> number;
	std::cout << "The Array Before You Delete The Number : " << std::endl;
	for (int i = 0; i < array.size(); i++)
	{
		std::cout << array[i] << " ";
	}
	if (deleteNumber(array, number)) {
		std::cout << "The Number You Have Entered is deleted" << std::endl;
	}
	else {
		std::cout << "The Number You Have Entered does not exist" << std::endl;
	}
	for (int i = 0; i < array.size(); i++)
	{
		std::cout << array[i] << " ";
	}
	return 0;
}