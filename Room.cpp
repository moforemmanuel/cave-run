//
// Created by manuel on 1/14/25.
//

#include <stdexcept>
#include "Room.h"

namespace CaveRun {
    Room::Room(std::string _id, std::vector<int> _position, std::string _color, char _label):id(std::move(_id)), color(_color), label(_label) {
        if (_position.size() != 2) {
            throw std::invalid_argument("Position vector must have size 2.");
        }
        position = _position;
    }

    Room::~Room() {};

    void Room::visit(Player &player) const {

    }


} // CaveRun