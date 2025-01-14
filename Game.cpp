//
// Created by manuel on 1/14/25.
//

#include "Game.h"

namespace CaveRun {
    Game::Game(const Map &_map, const Player &_player, const Monster &_monster, const std::vector<int> &_startRoomPosition, const std::vector<int> &_endRoomPosition) {
        // setup graphics


        // assemble map
        map = new Map(5, 5);


        // create two character objects
        player = new Player({0, 0});
        monster = new Monster({4, 4});
    }

    Game::~Game() {}



} // CaveRun