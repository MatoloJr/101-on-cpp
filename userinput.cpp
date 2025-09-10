#include <iostream>

int main() {

    // use cin >> to accept user input
    // use cout << to display the output

    //declare the variable to store the input of data type string
    std::string country;
    std::string fullName;
    int age;

    // accept the user input which is stored to the variable we declared above
    std::cout << "What's your country?: ";
    std::cin >> country;

    std::cout << "What's your name?: ";
    std::getline(std::cin >> std::ws, fullName); // std::getline(std::cin, ) is used to accept strings with whitespaces/space btw the strings/characters and the after cin >> std::ws is used to eliminate any new whitespaces(ws) or new line character before user input 

    std::cout << "What's your age?: ";
    std::cin >> age;

    //output the results
    std:: cout << "You are from " << country << '\n'; 
    std:: cout << "Hello " << fullName << '\n';
    std:: cout << "You are " << age << " years old" <<'\n';

    return 0;
}