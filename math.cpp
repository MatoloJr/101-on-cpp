#include <iostream>
#include <cmath>

int main() {
    //math functions


    double m = 2;
    double y = 4; 
    double o = 6.226;
    double z;
    double a;
    double p;
    double q;
    double r;
    double w;
    double x;
    double u;



    z = std::max(m, y); // to display the largest number btw m and y
    a = std::min(m, y); // to display the smallest number btw m and y
    p = pow(m, y); // pow() is used to rise m to the power of y
    q = sqrt(y); // to find the square root 
    r = abs(-7+3); // abs() give you the absolute value i.e that value but in positive eg instead of -4 it give you 4
    w = round(o); //it rounds off the value to the nearest whole number i.e if after the decimal point it is greater than 5 it rounds off to the next whole number and if is it less than 5 it truncates it
    x = ceil(o); //it rounds up to the next/nearest whole number irregardless of the decimal numbers
    u = floor(o); //it rounds-down/truncates irredardless of the decimal number
    

    std::cout << x << '\n';
    std::cout << z << '\n';
    std::cout << a << '\n';
    std::cout << u << '\n';
    std:: cout << p << '\n';
    std::cout << q << '\n';
    std::cout << r << '\n';
    std::cout << w << '\n';

    return 0;
}

// for more math functions visit www.cplusplus.com/reference.cmath/