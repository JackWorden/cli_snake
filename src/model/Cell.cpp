//
// Created by jack on 4/20/17.
//

#include <iostream>
#include "model/Cell.h"

Cell::Cell(const Position::SizeType row, const Position::SizeType col) : position_(row, col) {}

Cell::~Cell() {}

void Cell::setType(Type type) {
    type_ = type;
}

int Cell::getColorCode() const {
    switch(type_){
        case EMPTY:
            return 40;
        case WALL:
            return 47;
        case FOOD:
            return 43;
        case SNAKE_HEAD:
            return 41;
        case SNAKE_TAIL:
            return 44;
        case SNAKE_BODY:
            return 42;
        default:
            return 40;
    }
}

bool Cell::isEmpty() const {
    return type_ == EMPTY;
}

