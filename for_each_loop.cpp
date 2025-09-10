#include <iostream>

int main() {
    //for each loop is a loop that eases the traversal over an iterable data set i.e arrays

    std::string students[] = {"david", "samuel", "faith", "joshua", "emmanuel"};

    int marks[] = {20, 90, 65, 87 ,93}; 

    //data type then name of current element we are on then our array variable
    for(std::string student : students){
        std::cout << student << '\n';
    }

    for (int mark : marks){
        std::cout << mark << '\n';
    }

    return 0;
}