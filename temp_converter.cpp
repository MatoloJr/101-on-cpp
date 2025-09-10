#include <iostream>

int main() {

    //temp conversion 
    double temp;
    char unit;

    std::cout << "***** Temperature Conversion *****\n";
    std::cout << "F = Fahrenheits\n";
    std::cout << "C = Celsius\n";
    std::cout << "K = Kelvins\n";

    std::cout << "What unit would you like to convert to: \n";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout << "Enter the temperature in Celsius: " << '\n';
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "Temperature is: " << temp << "F\n";
    }
    else if (unit == 'C' || unit == 'c'){
        std::cout << "Enter the temperature in Fahreinheits: " << '\n';
        std::cin >> temp;
        
        temp = (temp - 32) / 1.8;
        std::cout << "Temperature is: " << temp << "C\n";
        }
    else if (unit == 'K' || unit == 'k'){
        std::cout << "Enter the temperature in Celsius: " << '\n';
        std::cin >> temp;
        
        temp = (temp + 273.1) / 1;
        std::cout << "Temperature is: " << temp << "K\n";
        }
    else{
        std::cout << "Please enter in only F, C or K\n";
    }

    std::cout << "**********************************\n";

    return 0;
}