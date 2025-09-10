#include <iostream>

//struct declaration
struct car{
    std::string make;
    std::string model;
    int year;
    std::string color;

};

//function declaration
void printCar(car vehicle); //pass by value
void paintCar (car &vehicle, std::string color); //pass by reference

int main() {

    //struct creation
    car car1;
    car car2;

    car1.make = "BMW";
    car1.model = "M5";
    car1.year = 2023;
    car1.color = "Blue";

    car2.make = "Toyota";
    car2.model = "Hilux";
    car2.year = 2025;
    car2.color = "White";

    paintCar(car1, "yellow");
    paintCar(car2, "black");

    //calling a function i.e through a pass by value ()
    std::cout << &car1 << '\n';
    printCar(car1);

    std::cout << &car2 << '\n';
    printCar(car2);

    return 0;
}

//function definition to pass by value (creating a copy) and display the struct
void printCar(car vehicle){
    std::cout << &vehicle << '\n';

    std::cout << vehicle.make << '\n';
    std::cout << vehicle.model << '\n';
    std::cout << vehicle.year << '\n';
    std::cout << vehicle.color << '\n';
}

void paintCar (car &vehicle, std::string color) {
    vehicle.color = color;
}