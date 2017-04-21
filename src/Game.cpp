//
// Created by jack on 4/20/17.
//

#include "Game.h"
#include "Console.h"

Game::Game(int fps) : fps_(fps) {}

Game::~Game() {
    delete map_;
    map_ = nullptr;
}

void Game::play() {
    init();
}

void Game::init() {
    map_ = new Map(15, 15);
    (*map_).createRandFood();
    Console::writeMap(map_);
}