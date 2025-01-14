//
// Created by manuel on 1/14/25.
//

#ifndef MAP_H
#define MAP_H

#include <iostream>
#include <vector>
// #include "Room.h"

namespace CaveRun {
    class Room;

    class Map {
        std::vector<std::vector<Room*>> grid;
        int rows, cols;

    public:
        Map(int _rows, int _cols);
        ~Map();

        void addRoom(Room *room);
        Room* getRoom(int x, int y) const;

        void setRoom(int x, int y, Room *room);

        std::pair<int, int> getDimensions() const;

    };

} // CaveRun

#endif //MAP_H
