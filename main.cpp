#include <iostream>

int main () 
{
    std::string questions[] = {
        "1. In what year C++ was created?: ", 
        "2. Who invented C++?: ", 
        "3. What is the predecessor of C++?: ", 
        "4. Is the Earth flat?: "
    };

    std::string options[][4] = {
        { "A. 1969", "B. 1975", "C. 1985", "D. 1989" }, 
        { "A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerburg" }, 
        { "A. C", "B. C+", "C. C--", "D. B++" }, 
        { "A. yes", "B. no", "C. sometimes", "D. may be" } 
    };
    char answerKeys[] = { 'C', 'B', 'A', 'B' };

    int sizeOfQuestions = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score = 0;

    for(int i = 0; i < sizeOfQuestions; i++)
    {
        std::cout << "*************************\n";
        std::cout << questions[i] << '\n';
        std::cout << "*************************\n";

        for(int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++) 
        {
            std::cout << options[i][j] << '\n';
        }
        std::cout << "Your guess: ";

        std::cin >> guess;
        guess = toupper(guess);

        if(guess == answerKeys[i])
        {
            std::cout << "CORRECT!" << '\n';
            score++;
        }
        else 
        {
            std::cout << "WRONG!\n";
            std::cout << "Answer is \"" << answerKeys[i] << '"' << '\n';
        }

        std::cout << "*************************\n";
        std::cout << '\n' << '\n';
    }

    std::cout << "*************************\n";
    std::cout << "*        RESULTS        *\n";
    std::cout << "*************************\n";
    std::cout << "Correct Answers: " << score << '\n';
    std::cout << "Number of Questions: " << sizeOfQuestions << '\n';
    std::cout << "Score: " << (score/(double)sizeOfQuestions) * 100 << "%\n";
    std::cout << "*************************\n";

    return 0;
}