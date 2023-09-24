//_____________________________________________________________________________//
//Name        : Basel Amr Barakat                                              //
//Description : In this program We ask the user to enter an array and we make  //
//              a function that calculate the accumulate of the array          //
//Task Number : 20                                                             //
//_____________________________________________________________________________//

#include <iostream>
#include <numeric>
#include <vector>

int main(int argc, const char** argv) {
	std::vector<int> array;
	int Number_Of_Elements(0), accumulate(0), number(0);
	while (1) {
		std::cout << "Enter The Number Of Elemnts Of The Array : ";
		std::cin >> Number_Of_Elements;
		for (int i = 0; i < Number_Of_Elements; i++) {
			std::cout << "Enter Number " << i + 1 << " : ";
			std::cin >> number;
			array.push_back(number);
		}
		accumulate = std::accumulate(array.begin(),array.end(), 0);
		std::cout << "Sum: " << accumulate << std::endl;
		accumulate = (0);
		array.clear();
	}

    return 0;
}