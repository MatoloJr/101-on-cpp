#include <iostream>

//function declaration
double square(double length);
double cube(double side);
std::string concatStrings(std::string string1, std::string string2, std::string string3);

int main() {

    //return returns a value back to the spot where you calle the encompassing function
    //commonly found at the end of a function

    //string
    std::string firstname = "Emmanuel";
    std::string middlename = "Matolo";
    std::string lastName = "Muoki";
    std::string fullName = concatStrings(firstname, middlename, lastName);


    //area
    double length = 5.0;
    double area = square(length);

    //volume
    double side = 10.0;
    double volume = cube(side);

    std::cout << "The area is: " << area << '\n';
    std::cout << "The volume is: " << volume << '\n';
    std::cout << "Your full name is: " << fullName << '\n';

    return 0;
}

//function definition
//area function
double square(double length){
    double result = length * length;

    //return keyword
    return result;
}

//volume function
double cube(double side){
    double vol = side * side * side;
    return vol;
}

//
std::string concatStrings(std::string string1, std::string string2, std::string string3){
    return string1 + " " + string2 + " " + string3;
}
