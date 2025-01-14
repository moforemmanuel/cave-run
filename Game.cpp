//
// Created by manuel on 1/14/25.
//

#include <iostream>
#include "Game.h"
#include "Player.h"
#include "Monster.h"
#include "Map.h"

namespace CaveRun {
    Game::Game(int _rows, int _cols, const std::vector<int> &_startRoomPosition, const std::vector<int> &_endRoomPosition):
      rows(_rows),
      cols(_cols),
      startRoomPosition(_startRoomPosition), // Initialize startRoomPosition
      endRoomPosition(_endRoomPosition) {
        // setup graphics


        // assemble map
        map = new Map(cols, rows);


        // create two character objects
        player = new Player(startRoomPosition);
        monster = new Monster(endRoomPosition);

        activeCharacter = player;

        std::cout << "Active player is: " << activeCharacter->getName() << std::endl;
        std::cout << "Player health: " << player->getHealth() << std::endl;

        player->sense(*this);
        monster->sense(*this);
    }

    Game::~Game() {
    delete map;
    delete player;
    delete monster;
    }

    std::vector<int> Game::getMonsterPosition() const { return monster->getCurrentRoomPosition(); }
    std::vector<int> Game::getPlayerPosition() const { return player->getCurrentRoomPosition(); }



} // CaveRun