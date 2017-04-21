//
// Created by jack on 4/20/17.
//

#include <random>
#include "model/Map.h"

Map::Map(const SizeType row_count, const SizeType col_count)
        : cells_(row_count + 2, std::vector<Cell>()) { // +2 to add walls

    row_count_ = row_count + 2;
    col_count_ = col_count + 2;

    // initialize cells
    for(SizeType row = 0; row < row_count_; row++){
        for(SizeType col = 0; col < col_count_; col++){
            Cell cell = Cell(row, col);

            // First and last rows are all walls
            // Left and right columns are all walls
            if(row == 0 || row == row_count_ - 1){
                cell.setType(Cell::Type::WALL);
            }else if(col == 0 || col == col_count_ - 1){
                cell.setType(Cell::Type::WALL);
            }

            cells_[row].push_back(cell);
        }
    }
}

Map::~Map() {}

Cell* Map::getCell(Map::SizeType row, Map::SizeType col){
    return &(cells_[row][col]);
}

std::vector<Cell*> Map::getEmptyCells() {
    std::vector<Cell*> empty_cells;

    for(SizeType row = 0; row < row_count_; row++){
        for(SizeType col = 0; col < col_count_; col++){
            Cell* temp = getCell(row, col);
            if((*temp).isEmpty()){
                empty_cells.push_back(temp);
            }
        }
    }

    return empty_cells;
}

void Map::createRandFood() {
    std::vector<Cell*> empty_cells = getEmptyCells();
    if(empty_cells.empty()) return;

    std::vector<Cell*>::iterator iter = empty_cells.begin();
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<> dist(0, empty_cells.size() - 1);

    std::advance(iter, dist(mt));

    (**iter).setType(Cell::Type::FOOD);
}
