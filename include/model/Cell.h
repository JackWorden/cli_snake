//
// Created by jack on 4/20/17.
//

#ifndef CLI_SNAKE_CELL_H
#define CLI_SNAKE_CELL_H

#include "model/Position.h"

class Cell {
public:
    enum Type {
        EMPTY,
        FOOD,
        WALL,
        SNAKE_BODY,
        SNAKE_HEAD,
        SNAKE_TAIL
    };

    Cell(const Position::SizeType row, const Position::SizeType col);
    ~Cell();

    void setType(Type type);
    int getColorCode() const;

    bool isEmpty() const;
private:
    Type type_ = EMPTY;
    Position position_;
};


#endif //CLI_SNAKE_CELL_H
