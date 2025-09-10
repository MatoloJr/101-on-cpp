#include <iostream>

class stove{
    private://to hide the temp 
         int temperature = 0;

    public:

    //getter
    int getTemperature(){
        return temperature;
    }

    //setter
    //inorder for a user to change the temperature they will need to invoke the set temperature method
    void setTemperature(int temperature){
        if (temperature < 0){
            this -> temperature = 0;
        } else if (temperature >= 10){
            this -> temperature = 10;//the temperature value is maxed out at 10 irregardless of what the user enters
        } else {
            this -> temperature = temperature;
        }
    }
};

int main() {

    //abstraction entails hiding unnecessary data from outside a class
    //a getter is a function that makes a private attribute readable
    //a setter is a function that makes a private attribute writable

    stove stove1;

    stove1.setTemperature(100);//then they can pass in there temperature

    std::cout << "the temperature setting is: " << stove1.getTemperature() <<'\n';

    return 0;
}