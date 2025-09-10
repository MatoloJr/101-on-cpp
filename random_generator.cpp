#include <iostream>
#include <ctime>

int main() {

    //pseudo-random numbers
    srand(time(NULL)); // srand() is used to initialize the random number generator and time() is used as the seed

    int num1 = (rand() % 6) + 1; //rand() is used to generate random numbers, the modulus [%] is used to get the remainder, 6 specifies the range and +1 makes sure that the range is btw 1 and 6
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';

    return 0;
}