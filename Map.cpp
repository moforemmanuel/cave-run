//
// Created by manuel on 1/14/25.
//

#include "Map.h"
#include "Room.h"

namespace CaveRun {
    // Map::Map(int _rows, int _cols): rows(_rows), cols(_cols) {
    //     grid.resize(rows, std::vector<Room*>(cols, nullptr));
    // }

    Map::Map(int _rows, int _cols): grid(_rows, std::vector<Room*>(_cols, nullptr)), rows(_rows), cols(_cols) {};

    Map::~Map() {
        for (auto &row : grid) {
            for (const auto &room : row) {
                delete room;
            }
        }
    }

    void Map::addRoom(Room *room) {
        std::vector<int> pos = room->getPosition();
        if (pos.size() == 2) { // Check if the vector has two elements
            int x = pos[0];
            int y = pos[1];
            // ... use x and y

            grid[y][x] = room;
        } else {
            std::cerr << "Error: Room position vector has incorrect size." << std::endl;
            // Handle the error appropriately (e.g., throw an exception)
        }

    }



    Room* Map::getRoom(int x, int y) const {
        if (x >= 0 && x < cols && y >= 0 && y < rows) {
            return grid[rows - 1 - y][x]; // Corrected indexing for bottom-left origin
        } else {
            return nullptr; // Or throw an exception if you prefer
        }
    }

    void Map::setRoom(int x, int y, Room* room) {
        if (x >= 0 && x < cols && y >= 0 && y < rows) {
            grid[rows - 1 - y][x] = room;
        } else {
            throw std::out_of_range("Coordinates out of range.");
        }
    }

} // CaveRun