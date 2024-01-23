// main.cpp
#include <iostream>
#include "Game.h"

int main() {
    int maxnum;
    std::cout << "Enter the maximum number to guess: ";
    std::cin >> maxnum;

    Game game(maxnum);
    game.play();

    return 0;
}
