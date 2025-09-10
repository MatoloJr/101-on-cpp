//the luhn algorithm is used to validate credit card numbers
/*
here is how it work:
step 1. double every second digit from right to left, if doubled number is 2 digits split them
step 2. add all single digit from step 1
step 3. add all odd numbered digits from right to left
step 4. sum the results from steps 2 and 3
step 5. if the sum result from step 4 is divisible by 10 then that's a valid credit card number
*/


#include <iostream>

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

int main() {
    //
    std::string cardNumber;
    int result = 0;

    std::cout << "Enter your credit card number: ";
    std::cin >> cardNumber;

    //step 4 ... sum of step 2 and step 3
    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    //step 5 ... divisibility by 10
    if(result % 10 == 0){
        std::cout << cardNumber << " is valid";
    }
    else{
        std::cout << cardNumber << " is invalid";
    }

    return 0;
}

//step 1 ... spliting 2 digits
int getDigit(const int number){

    return number % 10 + (number / 10 % 10); //to split the numbers
}

//step 3 ... sum of all odd digits fro right to left
int sumOddDigits(const std::string cardNumber){

    int sum = 0;

    for (int i = cardNumber.size() - 1; i >= 0; i -= 2)
    {
        sum += getDigit(cardNumber[i] - '0');
    }

    return sum;
}

//step 1 ... double every second digit from right to left
//step 2 ... sum of single digits from step 1
int sumEvenDigits(const std::string cardNumber){

    int sum = 0;

    //-2 is used to subtract the second to last digit
    for(int i = cardNumber.size() - 2; i >= 0; i-=2){
        sum += getDigit((cardNumber[i] - '0') * 2); // '0' is subtracted because we are wroking with string whose characters have ASCII value i.e 0 is 48 and 9 is 57 thus subtracting 0 gives us a value range from 0 to 9
    }

    return sum;
}