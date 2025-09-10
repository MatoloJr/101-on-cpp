// we are looking at type def and type aliases 
#include <iostream>
#include <vector> 

//typedef std::vector<std::pair<std::string, int>> pairlist_t; //pairlist_t is an alias for std::vector<std::pair<std::string, int>>
typedef std::string text_t;
typedef int number_t;
/*
typedef has been replaced by using in C++11, but typedef is still valid and widely used.
using text_t = std::string; // using is a more modern way to create type aliases
*/
using letter_t = std::string;
using digits_t = int;

int main() {
    /*
    typedef is a reserved keyword used to create additional names(aliases) for another data types.
    it is a new identifier for an existing type, making the code more readable and easier to maintain.
    It allows you to define a new name for an existing type, making the code more readable and easier to maintain.
    */

    // instead of writing std::vector<std::pair<std::string, int>> pairlist; you can write pairlist_t pairlist;
    text_t firstName = "Emmanuel";
    number_t age = 30;
    letter_t lastName = "welcome to wakanda via C++";
    digits_t phoneNumber = 1234567890;


    std::cout << firstName << '\n';
    std::cout << age << '\n';
    std::cout << lastName << '\n';
    std::cout << phoneNumber << '\n';


    return 0;
}