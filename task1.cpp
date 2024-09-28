#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    
    std::srand(static_cast<unsigned int>(std::time(0)));

  
    const int MIN = 1;
    const int MAX = 50;

   
    int secretNumber = std::rand() % (MAX - MIN + 1) + MIN;

    int guess = 0;
    int attempts = 0;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I'm thinking of a number between " << MIN << " and " << MAX << "." << std::endl;
    

    // Game loop
    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else if (guess < secretNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You've guessed the number!" << std::endl;
            std::cout << "It took you " << attempts << " attempts." << std::endl;
        }
    } while (guess != secretNumber);

    return 0;
}
