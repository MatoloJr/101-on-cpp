#include <iostream>
#include <ctime>

int main() {
    //random event generator

    srand(time(NULL));
    
    int randNum = rand() % 5 + 1;

    switch(randNum){
        case 1: 
           std::cout << "You win a horse!\n";
           break;
        case 2:
            std::cout << "You win a bentley!\n";
            break;
        case 3:
            std::cout << "You win a mansion!\n";
            break;
        case 4:
            std::cout << "You win a jet!\n";
            break;
        case 5:
            std::cout << "You win a holiday!\n";
            break;
        }

    return 0;
}