#include <iostream>

int main() {
    /*
    arithmetic operators in C++ are used to perform mathematical operations on numeric data types.
    The basic arithmetic operators include addition (+), subtraction (-), multiplication (*), division (/), and modulus (%).
    These operators can be used with various numeric types such as integers, floating-point numbers, and doubles.
    */
   //C++ can calculate for BODMAS automatically (Brackets, Orders, Division, Multiplication, Addition, Subtraction) using arithmetic operators.


    int find = 10 + 5 - (3 * 2) / 4 * 2; // Example of using arithmetic operators with BODMAS
    int studentsPerClass = 20;
    double averageClass = 67.85;
    int remainder;
    float numberSch = 125.897f;
    int total;

    studentsPerClass = studentsPerClass + 5; // or students += 5; or students++; to add 1 student
    // students = students - 2; // or students -= 2; to remove 2 students or students--; to remove 1 student
    //students = students * 2; or students *= 2; to double the number of students
    //students = students / 4; or students /= 4; to divide the number of students by 4
    averageClass = averageClass / 7;
    numberSch = numberSch * 2;
    total = studentsPerClass * averageClass * numberSch; // Calculate the total by multiplying studentsPerClass, averageClass, and numberSch
    remainder = studentsPerClass % 3;// Note: The modulus operator (%) is used to find the remainder of a division operation.

    // to calculate if a number is even or odd just use modulus i.e if the number % 2 returns 0 it is even if not then it is odd


    std::cout << "total number of students in a class is: " << studentsPerClass << '\n';
    std::cout << "average number of class in a school is: " << averageClass << '\n';
    std::cout << "total number of students in mangu is: " << numberSch << '\n';
    std:: cout << "total number of students in mangu is: " << total << '\n';
    std::cout << "total number of remaining students is: " << remainder << '\n';
    std::cout << "The result of the arithmetic operation is: " << find << '\n';

    return 0;
}