#include <iostream>

void printInfo(const std::string name, const int age);

    int main()
{
    //const parameter is a parameter modified with the const keyword effectively making it read only
    //it makes your code more secure within a function and conveys the intent to other progammers
    //it is especially useful for references and pointers

    std::string name = "Emmanuel";
    int age = 21;

    printInfo(name, age);

    return 0;
}

void printInfo(const std::string name, const int age){
    name = " ";
    age = 0 ;

    std::cout << name << '\n';
    std::cout << age << '\n';
}

//video timeline 04:06:08