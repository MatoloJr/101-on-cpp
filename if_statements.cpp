#include <iostream>

int main(){

    //if statements are used to do something if a condition is true and if not then don't do it
    
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    /*you can still you less than '<', greater than '>', greater than or equal to '>=', less than of equal to '<=' and equal to '==' among other*/
    if(age >= 18){
        std::cout << "Welcome to our site!";
    }
    else if(age < 0){
        std::cout << "You haven't been born yet!";
    }
    else if(age >= 100){
        std::cout << "You are ancient!";
    }
    else{
        std::cout << "You are a minor!" ;
    }

    return 0;
}

// video timeline 01:03:39