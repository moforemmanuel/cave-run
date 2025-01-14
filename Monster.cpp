//
// Created by manuel on 1/14/25.
//

#include "Monster.h"
#include "Game.h"

namespace CaveRun {
    Monster::Monster(const std::vector<int>& _currentRoomPosition)
    : Character("monster", "monster", "red", 'M', 1, 1, _currentRoomPosition) {}

    Monster::~Monster() {}

    void Monster::sense(const Game &game) const {
        std::vector<int> playerPosition = game.getPlayerPosition();
        std::cout << "Player position: " << "{" << playerPosition[0] << ", " << playerPosition[1] << "}"<< std::endl;
    }


} // CaveRun