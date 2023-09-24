//___________________________________________________________________________________________//
//Name        : Basel Amr Barakat														     //
//Description : In this program We make a class used to back trace called functions          //
//Task Number : 21																		     //
//___________________________________________________________________________________________//

#include <iostream>
#include <string>
#include<vector>
#include<stack>
void fun2();
void fun3();
class FunctionTracer {
private:
    std::string functionName;
    static std::stack<std::string> callStack;
public:
    FunctionTracer(const std::string& functionName) : functionName(functionName) {
        callStack.push(functionName);
        std::cout << "Entering function: " << functionName << std::endl;
    }

    ~FunctionTracer() {
        callStack.pop();
        std::cout << "Exiting function: " << functionName << std::endl;
    }

    static void PrintBacktrace() {
        std::stack<std::string> tempStack = callStack;
        std::cout << "Function call backtrace:" << std::endl;
        while (!tempStack.empty()) {
            std::cout << tempStack.top() << std::endl;
            tempStack.pop();
        }
    }
};

std::stack<std::string> FunctionTracer::callStack;

// Helper macro to make it easy to create a FunctionTracer object in each function
#define TRACE_FUNCTION FunctionTracer functionTracer(__func__)

// Example usage
void fun() {
    TRACE_FUNCTION;
    fun2();
    // Write The Function Of The Code Here
}

void fun2() {
    TRACE_FUNCTION;
    fun3();
    // Write The Function Of The Code Here
}

void fun3() {
    TRACE_FUNCTION;
    //Print The BackTrace Of The Function Here
    FunctionTracer::PrintBacktrace();
    // Write The Function Of The Code Here
}
int main(int argc, const char** argv) {
    TRACE_FUNCTION;
    fun();

    return 0;
}