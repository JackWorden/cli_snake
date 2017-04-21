#ifndef CLI_SNAKE_CONSOLE_H
#define CLI_SNAKE_CONSOLE_H

#include <string>
#include <model/Map.h>

class Console {
public:
    static void moveCursor(const int col = 0, const int line = 0);

    static void clear();

    static void writeMap(Map *map);

private:
    static void writeCell(const Cell *cell);
};


#endif //CLI_SNAKE_CONSOLE_H
