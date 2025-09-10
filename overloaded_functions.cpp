#include <iostream>

void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

int main(){
    //overloaded functions enable you to have different versions of the same function
    //they can share the same name but you need a different set of parameters i.e ()
    //a function's name plus it's parameters is known as a function signature and each signature needs to be unique

    bakePizza("pepperoni", "mushrooms");

    return 0;
}

void bakePizza(){
    std::cout << "Here is your Pizza!" << '\n';
}
void bakePizza(std::string topping1){
    std::cout << "Here is your " << topping1 << " pizza!\n";
}
void bakePizza(std::string topping1, std::string topping2){
    std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza!\n";
}