#include <iostream>

int main() {
    // do while loop does executes some block of code first the repeats if condition is true
    int number;

    do{
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    } while (number < 0);
    

    return 0;
}