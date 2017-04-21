//
// Created by jack on 4/20/17.
//

#include <iostream>
#include "Console.h"

void Console::moveCursor(const int col, const int line) {
    printf("\033[%d;%dH", line, col);
}

void Console::clear(){
    printf("\033[2J");
}

void Console::writeMap(Map *map) {
    Map::SizeType rows = (*map).row_count_;
    Map::SizeType cols = (*map).col_count_;

    Console::clear();
    Console::moveCursor(0, 0);

    for(Map::SizeType i = 0; i < rows; i++){
        for(Map::SizeType j = 0; j < cols; j++){
            writeCell((*map).getCell(i, j));
        }
        printf("\n");
    }
    printf("\n");
}

void Console::writeCell(const Cell *cell) {
    int background_color = (*cell).getColorCode();

    printf("\033[%d;%dm  ", background_color - 10, background_color);
}