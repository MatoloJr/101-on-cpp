#include <iostream>

//function are declared before the main function[int main()]

std::string name = "Emmanuel";

void happyBirthday(std::string name) {
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday dear " << name << '\n';
    std::cout << "Happy Birthday to you!\n";
    std::cout << "How old are you now!\n";
    std::cout << "How old are you now!\n";
    std::cout << "Happy Birthday!\n";
    std::cout << "Happy Birthday!\n";
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday to you!\n\n";
}

void celebrateBirthday(std::string name, int age);

int main() {
    //function is a block of reusable code
    //function aren't aware of what is going on inside of other function but you can make them aware of any local variables/values by passing them as an arguement but you will need a matching set of parameters

    happyBirthday(name);
    
    int age = 21;

    celebrateBirthday(name, age);

    return 0; 
}

void celebrateBirthday(std::string name, int age){
    std::cout << "FROM PARENTS: " << "As you turn " << age << " we want to wish you a Happy Birthday " << name << " enjoy yourself" << '\n';
    std::cout << "FROM SIBLINGS: " << "Our elder brother as you turn " << age << " we want to wish you a Happy Birthday " << name << " check your mpesa" << '\n';
    std::cout << "FROM FRIENDS: " << "From us " << age << " we want to wish you a Happy Birthday " << name << " we are going out" << '\n';
    std::cout << "FROM SPOUSE: " << "My love as you turn " << age << " we want to wish you a Happy Birthday " << name << " you are getting lucky tonight" << '\n';
    std::cout << "FROM CHILDREN: " << "Dad as you turn " << age << " we want to wish you a Happy Birthday " << name << " we love you" << '\n';
}


// video timeline 02:10:33