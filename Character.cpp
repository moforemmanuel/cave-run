//
// Created by manuel on 1/14/25.
//

#include "Character.h"

#include <utility>

namespace CaveRun {
    Character::Character(std::string _id, std::string _name, const std::string &_color, const char _label, const int _moves, const std::vector<int> &_currentRoomPosition):id(std::move(_id)),name(std::move(_name)),color(_color), label(_label), moves(_moves), currentRoomPosition(_currentRoomPosition){};
    Character::~Character() {};





} // CaveRun