#include <iostream>

class pizza{
    public:
        std::string topping1;
        std::string topping2;
    
    pizza(std::string topping1){
        this -> topping1 = topping1;
    }

    pizza(std::string topping1, std::string topping2){
        this -> topping1 = topping1;
        this -> topping2 = topping2;
    }
};

int main() {
    //overloaded constructors are made up of multiple constructors with the same name but different parameters
    //they do allow for a varying number of arguements when instantiating an object

    pizza pizza1("pepperoni");
    pizza pizza2("beef", "cheese");


    std::cout << pizza1.topping1 << '\n';
    std::cout << pizza2.topping1 << '\n';
    std::cout << pizza2.topping2 << '\n';

    return 0;
}