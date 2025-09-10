#include <iostream>

int main() {

    //null value is a special value that means something has no value
    //when a pointer is holding a null value that means that the pointer is not pointing at anything
    //nullptr is a keyword used to represent a null pointer literal
    //nullptr are helpful when determining if an address was successfully assigned to a pointer
    //when using a pointer, be careful that your code isn't dereferencing a null or pointing to a free memory that we are not using because it can lead to undefined behaviour


    int *pointer = nullptr; 
    int x = 123;

    pointer = &x;

    if(pointer == nullptr){
        std::cout << "address was not assigned\n";
        std::cout << *pointer;
    }
    else{
        std::cout << "address was assigned\n";
        std::cout << *pointer;
    }


    return 0;
}

//video timeline 04:23:18