#include <iostream>
#include <iomanip> //there is a function in here to set precision for floating point numbers

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main() {
    double balance = 0;
    int choice = 0;

    do{
        std::cout << "***************************\n";
        std::cout << "Select your choice\n";
        std::cout << "***************************\n";
        std::cout << "1. Show Balance \n";
        std::cout << "2. Deposit Money \n";
        std::cout << "3. Withdraw Money \n";
        std::cout << "4. Exit \n";

        std::cin >> choice;

        std::cin.clear();//this function will reset any errors flagged when the standard input fails to interpret the input
        fflush(stdin);//this function will clear the input buffer

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance = balance + deposit(); // or you can write it as balance += deposit();
            showBalance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            showBalance(balance);
            break;
        case 4:
            std::cout << "Thanks for visiting" << '\n';
            break;
        default:
            std::cout << "Invalid choice!" << '\n';
        }
    }while(choice !=4); //while choice is not equal to 4

    return 0;
}

void showBalance(double balance){
    std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << '\n'; //the std::setprecision(2) << std::fixed is used to set the balance to 2 decimal points
}

double deposit(){

    double amount = 0;

    std::cout << "Enter the amount to be deposited: $";
    std::cin >> amount;

    if(amount > 0){
        return amount;
    }
    else{
        std::cout << "That's not a valid amount: " << '\n';
        return 0;
    }
}

double withdraw(double balance){

    double amount = 0;

    std::cout << "Enter amount to be withdrawn: $";
    std::cin >> amount;

    if(amount > balance){
        std::cout << "Insufficient funds\n";
        return 0;
    }
    else if(amount < 0){
        std::cout << "That's not a valid amount: " << '\n';
        return 0;
    }
    else{
        return amount;
    }
}