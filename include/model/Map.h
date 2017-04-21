//
// Created by jack on 4/20/17.
//

#ifndef CLI_SNAKE_MAP_H
#define CLI_SNAKE_MAP_H

#include <vector>
#include "Cell.h"
#include "Position.h"

class Map {
public:
    typedef Position::SizeType SizeType;
    SizeType row_count_;
    SizeType col_count_;

    Map(const SizeType col_count, const SizeType row_count);
    ~Map();

    Cell* getCell(SizeType row, SizeType col);

    void createRandFood();
private:
    std::vector<Cell*> getEmptyCells();
    std::vector<std::vector<Cell>> cells_;
};


#endif //CLI_SNAKE_MAP_H
