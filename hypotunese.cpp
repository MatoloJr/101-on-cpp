#include <iostream>
#include <cmath>

int main(){

    //calculate the hypotunese of a right angled triangle

    //with fixed values
    double l;
    double w;
    double h;

    l = pow(4, 2);
    w = pow(3, 2);

    h = sqrt(l+w);


    std:: cout << h << '\n';

    //with user inputted values
    double a;
    double b;
    double c;

    std:: cout << "Enter value of a: ";
    std::cin >> a;

    std::cout << "Enter value of b: ";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    std:: cout << "The hypotunese is: " << c << '\n';

    return 0;
}