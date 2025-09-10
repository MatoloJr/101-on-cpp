#include <iostream>

void walk(int steps);
int factorial (int num);

int main() {
    //recursion is a programming techique where a function invokes itself from within
    //it breaks a complex concept into a repeatable single steps

    //advantages of recursion
    //1. less code and it is cleaner
    //2. useful for sorting and searching algorithms

    //disadvantages of recursion
    //1. uses more memory
    //2. it is slower

    //invoking/calling the function
    walk(100);

    std::cout << factorial(10);

    return 0;
}

void walk(int steps){
    /*
    //iterative approach
    for (int i = 0; i < steps; i++){
        std::cout << "You take a step!\n";
    }
        */

    //recursive approach
    if (steps > 0){
        std::cout << "You take a jump!\n";
        walk(steps - 1);
    }
    
    
}

int factorial (int num){
    /*
    //iterative
    int result = 1;

    for (int i = 1; i <= num; i++){
        result = result * i;
    }
    return result;
    */

    //recursive
    if (num > 1){
        return num * factorial(num -1);
    } else {
        return 1;
    }
    

}