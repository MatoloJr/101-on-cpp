#include <iostream>

int main() {
    //arrays are data structures that hold multiple values
    //the values are accessed by an index number
    //arrays can only contain values of the same data types

    std::string cars[] = {"Rolls royce", "Bentley", "GTR"};
    
    cars[0] = "mclaren"; //reassigning the value of a specified array

    std::string area[2];

    area[0] = "kenya";
    area[1] = "wakanda";

    double prices[] = {5.90, 4.99, 6.75, 9.00};
    
    std::cout << cars[0] << '\n';//the[] is used to specify the index of the array to display
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';
    std::cout << area[0] << '\n';
    std::cout << area[1] << '\n';
    std::cout << prices[0] << '\n';
    std::cout << prices[1] << '\n';
    std::cout << prices[2] << '\n';
    std::cout << prices[3] << '\n';

    return 0;
}