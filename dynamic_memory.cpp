#include <iostream>
//dynamic memory is allocated after the program is already compiled and running
//use the 'new' operator to allocate memory in the heap rather than the stack
//it is useful when we don't know how much memory we will need as it makes our program more flexible especially when accepting user input


int main() {

    int *pNum = NULL;//this '*' is a dereferencing operator.It is good practice when declaring a pointer but don't assign it right away to give it a value of NULL
    char *pGrades = NULL;
    int size;

    std::cout << "How many grades to enter in: " << '\n';
    std::cin >> size;


    //to allocate memory in the heap rather than the stack follow > variable = new dataType
    pNum = new int;//the new operator will return an address
    pGrades = new char[size];

    //to store value
    *pNum = 21;

    for (int i = 0; i < size; i++){
        std::cout << "Enter the grade number " << i+1 << ": " << '\n';
        std::cin >> pGrades[i];
    }

    std::cout << ".................." << '\n';
    std::cout << "For pGrades" << '\n';
    for (int i = 0; i < size; i++){
        std::cout << pGrades[i] << " " << '\n';
    }

    std::cout << "For pNum" << '\n';
    std::cout << ".................." << '\n';
    std::cout << "address is: " << pNum << '\n'; //outputs the memory address
    std::cout << "value is: " << *pNum << '\n';

    delete pNum; //it's good practice to free up memory at this address else it may cause a memory leak
    delete[] pGrades;

    return 0;
}