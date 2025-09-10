#include <iostream>

int main(){
    // std means standard
    // cout is character output
    // << is the insertion operator for outputting to the console
    // ! is used to tell the compiler that this is the end the statement
    /*<< std::endl is used to skip/go to the next line and it flashes the output buffer
    '\n' means new line character. it is used to skip/go to the next line and is better performance wise*/
    std::cout << "i like pizza!" << std::endl;
    std::cout << "i really like C++" << '\n';

    return 0;
}

/*

#include <iostream> is a preprocessor directive that includes the iostream library, which is used for input and output operations in C++.
int main() is the main function where the execution of the program begins.
return 0; indicates that the program has executed successfully.
std::cout is used to output data to the standard output (usually the console).

basic structure of a C++ program includes:
1. Preprocessor directives (like #include <iostream>)
2. The main function (int main())
3. Statements and expressions (like std::cout << "Hello, World!";)
// The code prints "i like pizza!" and "i really like C++" to the console, each on a new line.
// The std::endl manipulator is used to insert a new line and flush the output buffer, while '\n' is a newline character that also moves the cursor to the next line.
// The code demonstrates basic output in C++ using the standard output stream (std::cout) and shows how to use both std::endl and '\n' for new lines.
// The code is a simple C++ program that prints two messages to the console, demonstrating basic output functionality in C++.

example of the basic structure of a C++ program:
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl; // Output a message to the console
    return 0; // Indicate successful execution
}

*/