#include <iostream>

int main() {
    //pointers are variables that store a memory address of another variable
    //pointers are used because sometimes it is just easier to work with an address

    // & address of operatoe (ambersand)
    // * dereference operator 

    std::string name  = "Emmanuel";
    int age = 21;
    std::string freePizza[5] = {
        "pizza1",
        "pizza2",
        "pizza3",
        "pizza4",
        "pizza5",
    };


    std::string *pName = &name; // to create a point use the dereferencing(*) operator then a common naming convection is to start with p the the variable name (*pName) which will be equal to the memory address of the variable (&name)
    int *pAge = & age;
    std::string *pFreePizza = freePizza; //for arrays you don't have to you the ambersand because arrays will ouput the memory address

    std::cout<< pName << '\n';
    std::cout << pAge << '\n';
    std::cout << pFreePizza << '\n';

    //to access the value in the memory address use the dereferencing operator
    std::cout << *pName << '\n';
    std::cout << *pAge << '\n';
    std::cout << *pFreePizza << '\n';

    return 0;
}

