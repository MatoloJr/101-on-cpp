#include <iostream>
#include <ctime>

int main() {
    //number guessing game

    int num;
    int guess;
    int tries;

    srand(time(NULL));

    num = (rand() % 100) + 1;

    std::cout << "******** NUMBER GUESSING GAME ********\n";

    do{
        std::cout << "Enter a guess between (1-100): ";
        std::cin >> guess;
        tries++;

        if(guess > num){
            std::cout << "Too High!\n";
        }
        else if(guess < num){
            std::cout << "Too Low!\n";
        }
        else{
            std::cout << "CORRECT! number of tries: " << tries << '\n';
        }


    } while(guess != num);

    std::cout << "******** END GAME ********\n";

    return 0;
}