#include <iostream>

//global variable
int num = 3;

void printNum();

int main() {
    //local variables are declared inside a function or block {}
    //global variables are declared outside of all functions

    //variables declared inside of a function are more secure since functions can't see inside other functions

    //local variable
    int myNum = 1;

    printNum();
    std::cout << myNum << '\n';
    std::cout << ::num << '\n'; //the 2 full colons represent the scopre resolution operator which specifies the compiler to encompass the global variable

    return 0;
}

void printNum(){
    std::cout << num << '\n';
}

