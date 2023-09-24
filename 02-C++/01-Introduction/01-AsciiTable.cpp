//__________________________________________________________//
//Name        : Basel Amr Barakat                           //
//Description : In this program Will print the asci table	//
//				in format Char   ASCII                      //
//Task_Number : 1                                           //    
//__________________________________________________________//
#include <iostream>
using namespace std;
#include <iomanip>
int main()
{
    std::cout << "|--------------------|" << std::endl;
    std::cout << "| Ascii Code Table : |" << std::endl;
    std::cout << "|" << std::setw(5) << std::setfill(' ') << "CHAR" << std::setw(11) << "ASCII" << std::setw(5) << "|" << std::endl;
    std::cout << "|--------------------|" << std::endl;
    for (int i = 32; i < 256; i++)
    {
        std::cout << "|" << std::setw(6) << std::setfill(' ') << char(i) << std::setw(5)<<"|" << std::setw(5) << i << std::setw(5) << "|" << std::endl;
    }
    std::cout << "|--------------------|" << std::endl;
}