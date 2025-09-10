#include <iostream>

int main() {

    //ternary operator ie represented by a question mark followed by a colon(?:)
    //it is a replacement to using if/else statement 
    //condition ? expression1 : expression2;

    /*
    //using if/else
    int grade = 75;

    if(grade >= 60){
        std::cout << "You passed!";
    }
    else{
        std::cout << "You failed!";
    }
    */

    //using ternary operator
    int grade = 75;

    grade >=60 ? std::cout << "You passed!" << '\n' : std::cout << "You failed!" << '\n';


    int number;
    std::cout << "Enter your number to determine whether it is even or odd: ";
    std::cin >> number;

    number % 2 > 0 ? std::cout << "ODD" << '\n' : std::cout << "EVEN" << '\n';


    bool hungry = true;

    hungry ? std::cout << "You are hungry" << '\n' : std::cout << "You are full" << '\n';

    
    //you can also write it as
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << (age > 19 ? "You are an Adult" : "You are a teenager");

            return 0;
}