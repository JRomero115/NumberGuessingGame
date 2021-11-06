#include <iostream>
#include <ctime>

/***************************************************
* Summary: Number Guessing Game
*
*     System generates a random number for a user
*     to guess!
*
* Author: Janine Romero
****************************************************/

int main() 
{   // Random number generator
    srand(time(0));
    int num = rand() % 999 + 0;
    // Initialize variables 
    // Guessing numbers from 0 to 999
    int guess = 0; // variable for the user's guess
    // For if the user wants to play again
    char playAgain;

    // Intro to program
    std::cout << "Welcome to the Number Guessing Game!\n";
    // Jump here is user wants to play again
    Again:
    // Do-while loop begins
    do {
        std::cout << "\nEnter your guess (0-999): ";
        // Where user will input guess
        std::cin >> guess;  
        // Catching user's input and outputting correct response
        if (guess >= 1000 || guess < 0) {
            std::cout << "Not a valid input. Try again. "; 
        }
        else if (guess < num) {
            std::cout << "Your guess was lower. Try again. ";
        }
        else if (guess > num) {
            std::cout << "Your guess was greater. Try again. ";
        }
    } while(guess != num); // Do-while loop ends
    
    // If user wants to play again
    while (guess == num)
    {   // If user guesses number
        std::cout << "\nCorrect!";
        std::cout << "\nWant to play again? (Y/N) ";
        std::cin >> playAgain;     
        // If user inputs N or n
        if (playAgain == 'N' || playAgain == 'n') {
            std::cout << "Thanks for playing!\n";
            break;
        }
        // If user inputs Y or y
        if (playAgain == 'Y'|| playAgain == 'y') {
            // Do-while input is invalid
            do {
                goto Again;
            } while(guess != num);
        // For any input other than "Y" or "N"
        } else {
            std::cout << "That is not a valid input.";
        }
  }
  return 0;
}
