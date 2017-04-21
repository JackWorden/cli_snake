//
// Created by jack on 4/20/17.
//

#ifndef CLI_SNAKE_GAME_H
#define CLI_SNAKE_GAME_H

#include <model/Map.h>

class Game {
public:
    Game(int fps);
    ~Game();

    void play();
private:
    const int fps_ = 60;
    Map *map_ = nullptr;

    void init();
};


#endif //CLI_SNAKE_GAME_H
