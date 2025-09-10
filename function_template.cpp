#include <iostream>

int max(int x, int y){
    return(x > y) ? x : y;
}

int main() {
    //a function template describes what afunction looks like
    //can be used to generate as many overloaded functions as needed each using different data types

    std::cout << max(1, 2) << '\n';

    return 0;
}


//video timeline 04:59:33
