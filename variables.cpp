#include <iostream>

int main(){

    /*
    data types used

    1. integer [int] - used to store whole numbers
    2. double [double] - store numbers i.e both whole and decimal numbers
    3. character [char] - store a single character
    4. boolean [bool] - store true or false values
    5. string [] - is a type of object that store a sequence of text i.e both characters and numbers
    */

    //int
    int x; //declaration of a variable i.e x is the variable
    x = 5; //assigning value to a variable
    int y = 20;

    //double
    double price = 10.99;

    //char
    char grade = 'A'; //the single quotes are used in char

    //boolean
    bool student = true;
    bool power = false; //if off

    //string
    std::string name = "Emmanuel"; //std is used to specify that it is standard and double quotes are used in text
    std::string day = "Monday"; 
    std::string address = "123 fake St.";
    //video timeline was 22min and 27sec

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << price << '\n';
    std::cout << grade << '\n';
    std::cout << student << '\n';
    std::cout << power << '\n';
    std::cout << "Hello, " << name << '\n';
    std::cout << "Today is on: " << day << '\n';
    std::cout << address << '\n';
    return 0;
}