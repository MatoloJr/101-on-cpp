#include <iostream>

int main() {

    char grades [] = {'A', 'B', 'C', 'D', 'E', 'F'};

    std::string students[] = {"spongebob", "patrick", "sandy", "squidward"};

    //to display all elements of the array
    for(int i = 0; i < sizeof(students)/sizeof(std::string); i++){
        std::cout << students[i] << '\n';
    }

    for (int i = 0; i < sizeof(grades) / sizeof(char); i++)
    {
        std::cout << grades[i] << '\n';
    }

    return 0;
}