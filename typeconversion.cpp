#include <iostream>

int main()
{
    /*
    type conversion is converting a value of one data type to another
    there are 2 ways in which this can be done i.e implicit which is done automatically and explicit in which you precede the value with a new data type
    */

    //implicit

    // int x = 3.14; > the value for x as a int on the output will be truncted thus it is implicitly converted to 3 as integers output whole numbers. now by changing the data type of double the full value of x is displayed
    double x = 3.14;
    char m = 100; // the value 100 will be converted to the ASCII value of 100 as a character per the ASCII table which is d
    int correct = 9;
    int questions = 12;



    //explicit
    double y = (int) 3.14;
    int n = (char) 100;
    std::cout << (char) 110 << '\n';
    double score = correct/(double)questions * 100; //if you divide correct and question you will get 0% since both are integers as they only deal in whole numbers. to get the accurate score explicitly assign the data type double to questions as it is the one dividing correct

    std:: cout << x << '\n';
    std:: cout << y << '\n';
    std::cout << m << '\n';
    std::cout << n << '\n';
    std::cout << score << "%" << '\n';

    return 0;
}