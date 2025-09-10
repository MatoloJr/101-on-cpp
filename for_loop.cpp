#include <iostream>

int main() {
    //for loop executes a block of code a specified number of times
    
    //the i is index in full
    for(int i = 10; i >= 0; i--)
    /*
    i = 1; assign 1 to i (starting condition)
    i <= 3; counts until i reaches 3 (stoping condition)
    i++ incremental(still you can use i+=2 i.e an incremental of 2) increase by one you can also decrease by i-- 
    */
    {
        std::cout << i << '\n';
    }
    
    std::cout << "HAPPY NEW YEAR!" << '\n'; //this code block should be repeated per i <=_ times

    return 0;
}