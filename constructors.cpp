#include <iostream>

class student{
    public:
        //attributes
        std::string name;
        int age;
        double gpa;
    
    //constructor creation
    //the constructor has the same name as the class
    //think of this as a function, we can step up parameters
    //parameters are the ones in the brackets ()
    student(std::string name, int x, double y){
        //to assign attributes with the parameters we use this keyword
        this -> name = name;
        age = x;
        this -> gpa = y;
    }
};

int main() {

    //a constructor is a special method that is automatically called when an object is instantiated
    //they are useful for assigning values to attributes as arguements

    //instantiating a constructor
    student student1("spongebob", 100, 3.2);

    std::cout << student1.name << '\n';
    std::cout << student1.age << '\n';
    std::cout << student1.gpa << '\n';

    student student2("patrick", 160, 1.2);

    std::cout << student2.name << '\n';
    std::cout << student2.age << '\n';
    std::cout << student2.gpa << '\n';

    student student3("sandy", 84, 4.0);

    std::cout << student3.name << '\n';
    std::cout << student3.age << '\n';
    std::cout << student3.gpa << '\n';

    return 0;
}