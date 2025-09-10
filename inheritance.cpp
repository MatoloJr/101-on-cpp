#include <iostream>

//parent class 1
class animal{
    public:
        bool alive = true;

    void eat(){
        std::cout << "This animal is eating" << '\n';
    }
};

//child class 1
class dog : public animal{
    public:

    void bark(){
        std::cout << "The dog goes woof woof << '\n";
    }
};

//child class 2
class cat : public animal{
    public:

    void meow(){
        std::cout << "The cat goes meow" << '\n';
    }
};

//parent class 2
class shape{
    public:
        double area;
        double volume;
};

//child class 1
class cube : public shape{
    public:
        double side;

    cube(double side){
        this -> side = side;
        this -> area = side * side * 6;
        this -> volume = side * side * side;
    }
};

//child class 2
class sphere : public shape{
    public:
        double radius;

    sphere(double radius){
        this -> radius = radius;
        this -> area = 4 * 3.14159 * (radius * radius);
        this -> volume = (4/3.0) * 3.14159 * (radius * radius * radius);
    }
};

int main() {

    //inheritance is a class that can receive attributes and methods from another class
    //the receiving class is called a children class and it inherits from the parent class
    //it helps to reuse similar code found within multiple classes
    //for a child class to inherit from the parent class they use the : ((full colon symbol) followed by public then the name of the parent class e.g class dog : public animal

    //object creation
    dog dog1;
    cat cat1;

    cube cube1(10);
    sphere sphere1(21);

    std::cout << "Cube area is: " << cube1.area << "cm squared" <<'\n';
    std::cout << "Cube volume is: " << cube1.volume << "cm squared" << '\n';

    std::cout << "Sphere area is: " << sphere1.area << "cm squared" << '\n';
    std::cout << "Sphere area is: " << sphere1.volume << "cm squared" << '\n';

    std::cout << dog1.alive << '\n';

    dog1.eat();
    dog1.bark();

    std::cout << cat1.alive << '\n';

    cat1.eat();
    cat1.meow();

    return 0;
}