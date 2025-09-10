#include<iostream>
#include<ctime>

//function definition
void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);



int main() {
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    //function calling/invoking
    drawBoard(spaces);//when we pass in an array to a function it decays into a pointer thus no need to a pointer for this array

    while (running){
        playerMove(spaces, player);
        drawBoard(spaces);

        if (checkWinner(spaces, player, computer)){
            running = false;
            break;
        } else if(checkTie(spaces)){
            running = false;
            break;
        }
        

        computerMove(spaces, computer);
        drawBoard(spaces);

        if (checkWinner(spaces, player, computer)){
            running = false;
            break;
        } else if(checkTie(spaces)){
            running = false;
            break;
        }
    }
    std::cout << "Thanks for Playing" << '\n';
    
    return 0;
}

//function declaraction
void drawBoard(char *spaces){
    std::cout << '\n';
    std::cout << "      |      |      " << '\n';
    std::cout << "  " << spaces[0] << "   |  " << spaces[1] << "   |  " << spaces[2] << "   " << '\n';
    std::cout << "______|______|______" << '\n';
    std::cout << "      |      |      " << '\n';
    std::cout << "  " << spaces[3] << "   |  " << spaces[4] << "   |  " << spaces[5] << "   " << '\n';
    std::cout << "______|______|______" << '\n';
    std::cout << "      |      |      " << '\n';
    std::cout << "  " << spaces[6] << "   |  " << spaces[7] << "   |  " << spaces[8] << "   " << '\n';
    std::cout << "      |      |      " << '\n';
    std::cout << '\n';
}

void playerMove(char *spaces, char player){
    int number;

    do{
        std::cout << "Enter a spot to place a marker (1-9): ";
        std::cin >> number;
        number--; //we are decrementing the number by 1 because arrays start from 0

        if (spaces[number] == ' '){
            spaces[number] = player;
            break;
        }
        
    } while (!number > 0 || !number < 8);//not number is greater than 0 or not number is less than 8
    
}

void computerMove(char *spaces, char computer){
    int number;
    srand(time(0)); //to generate random numbers

    while (true){
        number = rand() % 9;

        if (spaces[number] == ' '){
            spaces[number] = computer;
            break;
        }
        
    }
    
}

bool checkWinner(char *spaces, char player, char computer){

    //checking row 1
    if ((spaces[0] != ' ') && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2])){
        spaces[0] == player ? std::cout << "You Win!\n" : std::cout << "You Lose!\n";
    } 
    //checking row 2
    else if ((spaces[3] != ' ') && (spaces[3] == spaces[4]) && (spaces[4] == spaces[5])){
        spaces[3] == player ? std::cout << "You Win!\n" : std::cout << "You Lose!\n";
    }
    //checking row 3 
    else if ((spaces[6] != ' ') && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8])){
        spaces[6] == player ? std::cout << "You Win!\n" : std::cout << "You Lose!\n";
    }
    //checking column 1 
    else if ((spaces[0] != ' ') && (spaces[0] == spaces[3]) && (spaces[3] == spaces[6])){
        spaces[0] == player ? std::cout << "You Win!\n" : std::cout << "You Lose!\n";
    }
    //checking column 2
    else if ((spaces[1] != ' ') && (spaces[1] == spaces[4]) && (spaces[4] == spaces[7])){
        spaces[1] == player ? std::cout << "You Win!\n" : std::cout << "You Lose!\n";
    }
    //checking column 3
    else if ((spaces[2] != ' ') && (spaces[2] == spaces[5]) && (spaces[5] == spaces[8])){
        spaces[2] == player ? std::cout << "You Win!\n" : std::cout << "You Lose!\n";
    }
    //checking diagonal 1 
    else if ((spaces[0] != ' ') && (spaces[0] == spaces[4]) && (spaces[4] == spaces[8])){
        spaces[0] == player ? std::cout << "You Win!\n" : std::cout << "You Lose!\n";
    }
    //checking diagonal 2
    else if ((spaces[2] != ' ') && (spaces[2] == spaces[4]) && (spaces[4] == spaces[6])){
        spaces[2] == player ? std::cout << "You Win!\n" : std::cout << "You Lose!\n";
    }
    else{
        return false;
    }
    
    return true;
}

bool checkTie(char *spaces){

    for (int  i = 0; i < 9; i++){
        if (spaces[i] == ' '){
            return false;
        }
    }
    std::cout << "It's a Tie!" << '\n';
    return true;
}