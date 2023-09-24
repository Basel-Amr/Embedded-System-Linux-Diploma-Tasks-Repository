//_____________________________________________________________________________//
//Name        : Basel Amr Barakat                                              //
//Description : In this program We fill array from 10 to 10000 sequentially    //
//Task Number : 18                                                             //
//_____________________________________________________________________________//

#include <iostream>
#include <numeric>

int main() {
    const int first_number(10), last_number(10000), size(last_number - first_number+1);
    int arr[size];
    std::iota(arr, arr + size, 10);

    for (int i : arr) {
        std::cout << i << " ";
    }

    return 0;
}