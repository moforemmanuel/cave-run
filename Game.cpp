//
// Created by manuel on 1/14/25.
//

#include <iostream>
#include "Game.h"
#include "Player.h"
#include "Monster.h"
#include "Map.h"

namespace CaveRun {
    Game::Game(int rows, int cols, const std::vector<int> &_startRoomPosition, const std::vector<int> &_endRoomPosition) {
        // setup graphics


        // assemble map
        map = new Map(cols, rows);


        // create two character objects
        player = new Player(startRoomPosition);
        monster = new Monster(endRoomPosition);

        activeCharacter = player;

        std::cout << "Active player is: " << activeCharacter->getName() << std::endl;
        std::cout << "Player health: " << player->getHealth() << std::endl;
    }

    Game::~Game() {
    delete map;
    delete player;
    delete monster;
    }



} // CaveRun