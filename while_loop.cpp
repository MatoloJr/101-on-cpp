#include <iostream>
#include <string>

int main() {
    //while loops

    std::string nm;
    std::string name;

    while(name.empty()){
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello " << name; 

    while(1==1){
        std::cout << "Help I'M stuck in an infinite loop" << '\n';
    }

    return 0;
}