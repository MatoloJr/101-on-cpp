#include <iostream>

//creating a struct
//student is a identifier that acts as it's own data type
struct student{
    std::string name;
    int age;
    double gpa;
    bool enrolled;
    char grade;
};

//main function
int main() {
    //struct is a structure that group related variables under one name
    //they can contain many different data types eg (string, double, int, boolen, char etc)
    //variables in a struct are called "members"
    //members can be accessed with a . (it represents a Class Member Access Operator)
    //a struct is created outside of the main function

    student student1;
    //accessing members in a struct
    student1.name = "Emmanuel";
    student1.age = 21;
    student1.gpa = 3.2;
    student1.enrolled = true;
    student1.grade = 'B';

    student student2;
    //accessing members in a struct
    student2.name = "wakanda";
    student2.age = 200;
    student2.gpa = 32.42;
    student2.enrolled = false;
    student2.grade = 'A';

    student student3;
    //accessing members in a struct
    student3.name = "forever";
    student3.age = 2;
    student3.gpa = 1.2;
    student3.enrolled = true;
    student3.grade = 'C';

    //output
    std::cout << student1.name << '\n';
    std::cout << student1.age << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';
    std::cout << student1.grade << '\n';

    std::cout << student2.name << '\n';
    std::cout << student2.age << '\n';
    std::cout << student2.gpa << '\n';
    std::cout << student2.enrolled << '\n';
    std::cout << student2.grade << '\n';

    std::cout << student3.name << '\n';
    std::cout << student3.age << '\n';
    std::cout << student3.gpa << '\n';
    std::cout << student3.enrolled << '\n';
    std::cout << student3.grade << '\n';


    return 0;
}