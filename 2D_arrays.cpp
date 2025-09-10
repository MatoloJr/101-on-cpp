#include <iostream>

int main() {
    //2D arrays

    //2D arrays have 2 sets of block brackets [] i.e one for the row and the other for columns
    //it is not a must for you to specify the number of rows nut you must specify the number of columns
    std::string cars[4][3] = {{"mustang", "escape", "f-150"},//by ford
                             {"corvette", "equinox", "silverado"}, //by chevrolet
                             {"camry", "harrier", "corolla"},// by toyota
                             {"civic", "accord", "fit"}};// by honda

    int rows = sizeof(cars)/sizeof(cars[0]); //number of rows
    int columns = sizeof(cars[0])/sizeof(cars[0][0]); //number of columns

    for(int i = 0; 1 < rows; i++){
        for(int j = 0; j < columns; j++){
            std::cout << cars[i][j] << " ";
        }
        std::cout << '\n';
    }


    return 0;
}