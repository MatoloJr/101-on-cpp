#include <iostream>

//template parameter declaration for T as the compiler doesn't know what T is
//this can only receive arguements of the same data types
//to solve the above issue just add a second(you can still add more than 2) template name besides the pre-existing one and correspondly change the parameter inside the function template accordingly
template <typename T, typename U> //not a must to use T you can use any other letter as long as you do declare it

//we create a function template to replace all data types in the multi line comments below
//using auto keyword the compiler will decide on what the return type of the data type should be
auto max(T x, U y){//2 templates type names mean you can have more than one data types in a parameter
    return(x > y) ? x : y;
}

/*
int max(int x, int y){
    return(x > y) ? x : y;
}

//function overloading
double max(double x, double y){
    return(x > y) ? x : y;
}

char max(char x, char y){
    return(x > y) ? x : y;
}
    */

int main() {
    //a function template describes what a function looks like
    //can be used to generate as many overloaded functions as needed each using different data types

    //1. max(1, 2) > to find and display the maximum of the two
    //2. you can add/replace the whole(int) values with decimal(double) value to entable the function overloading above
    //3. you can do the same as in 2 with the char value of the int values as each number has it's own associated ASCII value and it would still work without using the overloaded function for char
    //4. using the overloaded function for char will just output the value inside the ''
    std::cout << max(1, 2.8) << '\n';

    return 0;
}


