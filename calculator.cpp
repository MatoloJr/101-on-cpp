#include <iostream>

int main() {

    char op;
    double num1;
    double num2;
    double results;

    std::cout << "*************CALCULATOR*************\n";

    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;

    std::cout << "Enter #1: ";
    std::cin >> num1;

    std::cout << "Enter #2: ";
    std::cin >> num2;

    switch (op){
        case '+':
           results = num1 + num2;
           std::cout << "results: " << results << '\n';
           break;
        case '-':
            results = num1 - num2;
            std::cout << "results: " << results << '\n';
            break;
        case '*':
            results = num1 * num2;
            std::cout << "results: " << results << '\n';
            break;
        case '/':
            results = num1 / num2;
            std::cout << "results: " << results << '\n';
            break;
        default:
            std::cout << "That wasn't a valid respond\n";
        }

    std::cout << "************************************\n";

    return 0;
}