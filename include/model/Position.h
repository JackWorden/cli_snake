//
// Created by jack on 4/20/17.
//

#ifndef CLI_SNAKE_POSITION_H
#define CLI_SNAKE_POSITION_H

#include <cstddef>

class Position {
public:
    typedef std::size_t SizeType;

    const SizeType row_;
    const SizeType col_;

    Position(const SizeType row, const SizeType col);
    ~Position();
};


#endif //CLI_SNAKE_POSITION_H
