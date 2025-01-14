//
// Created by manuel on 1/14/25.
//

#ifndef MAP_H
#define MAP_H

#include <iostream>
#include <vector>
#include "Room.h"

namespace CaveRun {
    class Map {
        std::vector<std::vector<Room*>> grid;
        int rows, cols;

    public:
        Map(int _rows, int _cols);
        ~Map();

        void addRoom(Room *room);
        Room* getRoom(int x, int y);
        std::pair<int, int> getDimensions() const;

    };

} // CaveRun

#endif //MAP_H
