#include <iostream>

//declaration
enum day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 7};

int main() {
    //enums are user defined data types that consist of paired a name and an associated integer value
    //are great if you have a set of potential options

    day today = sunday;

    switch(today){
        case 0: //you can still use 0 in place of sunday as the int value in associated to a name
           std::cout << "It's Sunday!\n";
           break;
        case monday: 
           std::cout << "It's Monday!\n";
           break;
        case tuesday: 
           std::cout << "It's Tuesday!\n";
           break;
        case wednesday: 
           std::cout << "It's Wednesday!\n";
           break;
        case thursday: 
           std::cout << "It's Thursday!\n";
           break;
        case friday: 
           std::cout << "It's Friday!\n";
           break;
        case saturday: 
           std::cout << "It's Saturday!\n";
           break;

    }

    return 0;
}