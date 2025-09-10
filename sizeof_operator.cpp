#include <iostream>

int main() {

    //sizeof() determines the size in ytes of a variable, data type, class, object etc
    
    std::string name = "Emmanuel";

    double gpa = 2.5;

    char grade = 'A';

    bool student = true;

    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};

    std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};

    std::cout << sizeof(gpa) << " bytes\n";
    std::cout << sizeof(name) << " bytes\n";
    std::cout << sizeof(grade) << " bytes\n";
    std::cout << sizeof(grades) << " bytes\n";
    std::cout << sizeof(student) << " bytes\n";
    std::cout << sizeof(grades)/sizeof(char) << " elements\n";//used to find how many elements are within an array
    std::cout << sizeof(students) / sizeof(std::string) << " elements\n";

    return 0;
}