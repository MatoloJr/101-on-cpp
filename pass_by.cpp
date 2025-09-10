#include <iostream>

//swap by value
void swapVal(std::string x, std::string y);

//swap by reference
void swapRef(std::string &a, std::string &t);

int main() {

    //difference between pass by value and pass by reference
    
    std::string x = "kool-aid";
    std::string y = "water";
    std::string a = "welcome";
    std::string t = "terminal";
    
    //invoke this function and pass our arguements i.e pass by value
    swapVal(x, y);

    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';

    // invoke this function and pass our arguements i.e pass by reference
    swapRef(a, t);

    std::cout << "A: " << a << '\n';
    std::cout << "T: " << t << '\n';

    return 0;
}

// swap by value i.e creating copies of the arguement
void swapVal(std::string x, std::string y){
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}

//swap by reference i.e we are passing the memory address to where the original arguements are
//to swap by reference use ambersand before the variable
void swapRef(std::string &a, std::string &t)
{
    std::string high;
    high = a;
    a = t;
    t = high;
}