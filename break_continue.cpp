#include <iostream>

int main() {
    //break is used  to break out a loop
    //continue is used to skip the current iteration of a loop

    //break
    for(int i = 1; i <= 9; i++){
        if(i ==4){
            break;
        }
        std::cout << i << '\n';
    }


    //continue
    for (int q = 1; q <= 20; q++)
    {
        if (q == 13)
        {
            continue;
        }
        std::cout << q << '\n';
    }

    return 0;
}