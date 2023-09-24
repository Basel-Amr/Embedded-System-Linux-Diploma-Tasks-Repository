//_____________________________________________________________________________//
//Name        : Basel Amr Barakat                                              //
//Description : In this program We make an interrupt using ctrl+C	           //
//Task Number : 17                                                             //
//_____________________________________________________________________________//
#include <iostream>
#include <csignal>
#include<windows.h>           


void signalHandler(int signum) {
    std::cout << "Interrupt signal (" << signum << ") received." << std::endl;
    // Handle the interrupt signal here
    
    exit(signum);
}

int main() {
    // Register signal handler for SIGINT (Ctrl+C)
    signal(SIGINT, signalHandler);

    while (true) {

        std::cout << "Program processing..." << std::endl;
        Sleep(1000);
    }

    return 0;
}