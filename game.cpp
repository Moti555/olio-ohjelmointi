// Game.cpp
#include "Game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Game::Game(int maxNum) : maxNumber(maxNum), guessCount(0) {
    std::srand(static_cast<unsigned int>(std::time(0)));
    targetNumber = std::rand() % maxNumber + 1;
    std::cout << "Constructor: Max number is set to " << maxNumber << std::endl;
}

void Game::play() {
    int playerGuess;

    std::cout << "Guess the number between 1 and " << maxNumber << ": ";

    do {
        std::cin >> playerGuess;
        guessCount++;

        if (playerGuess < targetNumber) {
            std::cout << "The number is higher. Guess again: ";
        } else if (playerGuess > targetNumber) {
            std::cout << "The number is lower. Guess again: ";
        } else {
            std::cout << "Correct! Congratulations!" << std::endl;
            printGameResult();
        }
    } while (playerGuess != targetNumber);
}

void Game::printGameResult() {
    std::cout << "Game result: ";
    std::cout << "The correct number was " << targetNumber << " and it took " << guessCount << " guesses." << std::endl;
}

Game::~Game() {
    std::cout << "Destructor: Game object is destroyed." << std::endl;
}
