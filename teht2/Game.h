// Game.h

#ifndef GAME_H
#define GAME_H

class Game {
private:
    int maxNumber;
    int targetNumber;
    int guessCount;

public:
    Game(int maxNum);

    void play();

    void printGameResult();

    ~Game();
};

#endif  // GAME_H
