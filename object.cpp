#include <iostream>

//for object creation we use the class keyword
class human{
    public://access modifier
        std::string name;
        std::string occupation;
        int age;

    //a methods is a function that belongs to a class. it's something an object can perform or do
        void eat(){
            std::cout << "This person is eating!" << '\n';
        }

        void drink(){
            std::cout << "This person is drinking\n";
        }

        void sleep(){
            std::cout << "This person is sleeping\n";
        }
};

class car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;  

        void accelerate(){
            std::cout << "You stepped on the gas pedal" << '\n';
        }

        void brake(){
            std::cout << "You stepped on the brake pedal" << '\n';
        }
};

int main() {
    //an object is a collection of attributes and methods
    //they can have characteristics and perform actions
    //can be used to mimic real world items
    //created from a class which acts as a blueprint

    //object calling > the class(human) and an idenitifier(human1)
    human human1;
    human human2;

    car car1;

    car1.make = "Tesla";
    car1.model = "S";
    car1.year = 2020;
    car1.color = "Grey";

    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.year << '\n';
    std::cout << car1.color << '\n';

    car1.accelerate();
    car1.brake();

    human1.name = "Rick";
    human1.occupation = "Scientist";
    human1.age = 70;

    std::cout << human1.name << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';

    //method invoking
    human1.eat();
    human1.drink();
    human1.sleep();

    human2.name = "Morty";
    human2.occupation = "Hobbist";
    human2.age = 20;

    std::cout << human2.name << '\n';
    std::cout << human2.occupation << '\n';
    std::cout << human2.age << '\n';

    human2.eat();
    human2.drink();
    human2.sleep();

    return 0;
}