#include <iostream>

int main() {

    //&& used to check if 2 conditions are true
    //|| used to check if at least one of the 2 conditions is true
    //! used to reverse the logical state of its operand

    //&&
    int temp;

    std::cout << "Enter the temperature reading: ";
    std::cin >> temp;

    if(temp > 0 && temp < 30){
        std::cout << "The temperature is normal!\n";
    }
    else{
        std::cout << "The temperature is abnormal!\n";
    }

    //||
    int temp1;

    std::cout << "Enter the temperature reading 1: ";
    std::cin >> temp1;

    if (temp1 <= 0 || temp1 >= 30)
    {
        std::cout << "The temperature is abnormal!\n";
    }
    else
    {
        std::cout << "The temperature is normal!\n";
    }

    //!
    bool sunny = true;

    if(!sunny){ //it firstly checks if it is not sunny i.e assume the bool sunny if false
        std::cout << "It is cloudy outside ";
    }
    else{
        std::cout << "It is sunny outside ";
    }

    return 0;
}