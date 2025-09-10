#include <iostream>

int main() {

    //fill() fills a range of elements with a specified value
    //there are 3 fill arguements i.e. fill(begin, end, value)

    const int size = 100;

    std::string foods[size];

    // begining address of a data structure i.e array name then the ending address i.e array name + size then the value to fill
    fill(foods, foods + (size/3), "Pizza"); // Fill first half with "Pizza"
    fill(foods + (size/3), foods + size, "Burger"); // Fill second half with "Burger"
    // Fill the last third with "Pasta"
    fill(foods + (2 * size / 3), foods + size, "Pasta");

    for(std::string food : foods) {
        std::cout << food << '\n';
    }

    return 0;
}