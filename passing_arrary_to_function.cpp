#include <iostream>

double getTotal(double prices[], int size);

int main(){

    double prices[] = {49.99, 15.05, 75, 9.99};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size); //to pass an array to a function you only need to pass the array name

    std::cout << "$" << total;

    return 0;
}

//when a function receives an array it decays into a pointer thus the function doesn't know the size of the array hence pass that as an assitional arguement
double getTotal(double prices[], int size){
    double total = 0;

    for (int i = 0; i < size; i++)
    {
        total = total + prices[i];
    }

    return total;
}