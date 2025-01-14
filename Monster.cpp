//
// Created by manuel on 1/14/25.
//

#include "Monster.h"

namespace CaveRun {
    Monster::Monster(const std::vector<int>& _currentRoomPosition)
    : Character("monster", "monster", "red", 'M', 1, 1, _currentRoomPosition) {}

    Monster::~Monster() {}


} // CaveRun