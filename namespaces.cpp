#include <iostream>

namespace first{
    int x = 10; // Variable x in the first namespace
}
namespace second{
    int x = 30; // Variable x in the second namespace
}

int main() {
    //namespaces are used to organize code into logical groups and to prevent name collisions.
    //The std namespace is the standard namespace in C++ and contains all the standard library functions and objects.
    //Using the std namespace allows us to use standard library functions and objects without having to prefix them with std::.
    using namespace std;

    std::string name = "brav";

    std::cout << "hola! " << name << '\n';

    // or we can use the using directive to bring all the names from the std namespace into the global namespace.

    using std::cout; // Using cout from the std namespace

    std::string me = "bye"; // Declare and initialize 'men' as a string

    cout << "hello " << me << '\n';

    //int x = 10;
    int x = 20;
    // The above code will cause a compilation error because we are trying to declare the same variable 'x' twice in the same scope.
    // To avoid this, we can use namespaces to organize our code and prevent name collisions.
    //to do it, we can define a namespace and declare the variable outside of the main function i.e kallybrackets {}
    
    std:: cout << x << '\n'; // This will print 20, the local variable x
    std:: cout << first::x << '\n'; // This will print 10, the value of variable x in the first namespace
    std:: cout << second::x << '\n'; // This will print 30, the value of variable x in the second namespace
    

    return 0;
}

/*
namespace are use to provide a solution for preventing name conflicts i large projects.
Each entity needs a unique name, and namespaces help to achieve that by grouping related entities together.
Namespace allow for idetically named entities to exist as long as the namespaces are different.
*/