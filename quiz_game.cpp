#include <iostream>

int main() {

    std::string questions[] = {"1. What year was C++ created?: ",
                               "2. Who is the inventor of C++?: ",
                               "3. What is the main feature of C++?: ",
                               "4. What is the standard library of C++ called?: ",
                               "5. What is the file extension for C++ source files?: ",
                               "6. What is the predecessor of C++?: ",
                               "7. Is the earth flat?: "};

    std::string options[][4] = {{"A. 1969", "B. 1979", "C. 1985", "D. 1990"},
                                {"A. Dennis Ritchie", "B. Bjarne Stroustrup", "C. James Gosling ", "D. Linus Torvalds "},
                                {"A. Functional programming", "B. Procedural programming", "C. Object-oriented programming", "D. Logic programming"},
                                {"A. STL", "B. Boost", "C. C++ Standard Library", "D. Qt"},
                                {"A. .cpp", "B. .cxx", "C. .cc", "D. All of the above"},
                                {"A. C", "B. Java", "C. Python", "D. Pascal"},
                                {"A. Yes", "B. No", "C. Maybe", "D. I don't know"}};

    char answerKey[] = {'C', 'B', 'C', 'A', 'D', 'A', 'B'};

    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score;

    for(int i = 0; i < size; i++){
        std::cout << "**************************\n";
        std::cout << questions[i] << '\n';
        std::cout << "**************************\n";

        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            std::cout << options[i][j] << '\n';
        }

        std::cin >> guess;
        guess = toupper(guess);//convert user input to uppercase

        if(guess == answerKey[i]){
            std::cout << "Correct!\n"; 
            score++;
        } else {
            std::cout << "Wrong!" << '\n';
            std::cout << "The correct answer is: " << answerKey[i] << '\n';
        }
    }

    std::cout << "**************************\n";
    std::cout << "         RESULTS          \n";
    std::cout << "**************************\n";
    std::cout << "CORRECT GUESSES: " << score << '\n';
    std::cout << "Number of Questions: " << size << '\n';
    std::cout << "SCORE: " << (score/(double)size)*100 << "%";

    return 0;
}

// video timeline 03:57:25