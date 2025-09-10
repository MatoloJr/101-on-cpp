#include <iostream>
#include <string>

int main() {

    std::string foods[6];
    int size = sizeof(foods)/sizeof(foods[0]);
    std::string temp;

    for(int i = 0; i < size; i++){
        std::cout << "Enter food you like or 'q' to quit " << i + 1 << ": ";
        std::getline(std::cin, temp);
        if(temp == "q"){
            break;
        }
        else{
            foods[i] = temp;
        }
    }

    std::cout << "You like the following food:\n";

    for(int i = 0; !foods[i].empty(); i++){// Using empty() to check if the string is not empty
        std::cout << foods[i] << '\n';
    }


    return 0;
}