#include <iostream>

int main() {

    // memory address is a location in a memory where data is stored
    // a memory address can be accessed via the ambersand operator &
    // the memory address is usually displayed in a hexadecimal format eg 0xb6b3bff7f0
    // to convert hexadecimal to decimal you ignore the 0x at the beginning and use the rest
    // it also changes everytime you re-run the program and it does vary form computer to computer

    std::string name = "Emmanuel";
    int age = 21;
    bool student = true;

    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &student << '\n';

    return 0;
}