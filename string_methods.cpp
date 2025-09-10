#include <iostream>

int main() {

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    //name.length() > 21 counts and makes usre that the variable does not exceed the specified length 
    if(name.length() > 21){
        std::cout << "Your name can't exceed 21 characters ";
    }
    else{
        std::cout << "Welcome " << name << '\n';
    }

    // name.empty() returns a boolean value
    if(name.empty()){
        std::cout << "You didn't enter your name ";
    }
    else{
        std::cout << "Hello " << name << '\n';
    }

    // name.insert() inserts a character at a given position
    name.insert(0, "Mr "); // the zero specifies the position index then the prefix

    std::cout << "Your title is: " << name << '\n';

    //name.append() add a suffix to the end of your variable
    name.append("@gmail.com");

    std::cout << "Your email is: " << name << '\n';


    //name.at() returns character at the specified length value
    std::cout << name.at(3) << '\n';

    //name.find() finds any specified thing
    std::cout << name.find(' ') << '\n';

    //name.erase() erases a portion of a specified space
    name.erase(0, 3);// erases the first 3 characters

    std::cout << "Successfully erased part of your name to: " << name << '\n';

    // name.clear() clear the name in the output
    name.clear();

    std::cout << "hello " << name;



    return 0;

}

// for more information visit www.cplusplus.com/reference/string