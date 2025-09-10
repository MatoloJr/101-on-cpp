#include <iostream>

int main() {
    //The const keyword is used to define a constant value is constant or that it cannot be changed.

    //without a const keyword
    double pi = 3.14159; // This is a variable, not a constant
    double radius = 7;
    double area = pi * radius * radius;
    double circumference = 2 * pi * radius;

    //with a const keyword
    const double PI = 3.14159; // This is a constant
    const double LIGHT_SPEED = 299792458; // Speed of light in m/s
    const double PIXEL_WIDTH = 1920; // This is a constant
    const double pixel_height = 1080; // This is a constant
    double resolution = PIXEL_WIDTH * pixel_height;


    std::cout<< "Area is: " << area << '\n';
    std::cout<< "Circumference is: " << circumference << '\n';
    std::cout<< "PI is: " << PI << '\n';
    std::cout<< "Speed of light is: " << LIGHT_SPEED << " m/s\n";
    std::cout<< "Resolution is: " << resolution << " pixels\n";

    return 0; 
}