//
// Created by manuel on 1/14/25.
//

#include <iostream>
#include "Game.h"
#include "Player.h"
#include "Monster.h"
#include "Map.h"
#include "TrapRoom.h"
#include "PoisonRoom.h"

namespace CaveRun {
    Game::Game(int _rows, int _cols, const std::vector<int> &_startRoomPosition, const std::vector<int> &_endRoomPosition):
      rows(_rows),
      cols(_cols),
      startRoomPosition(_startRoomPosition), // Initialize startRoomPosition
      endRoomPosition(_endRoomPosition) {
        // setup graphics


        // assemble map
        map = new Map(cols, rows);

        for (int i=0; i < rows; i++) {
            for (int j=0; j < cols; j++) {
                map->addRoom(new Room("room-id", {j, i}, "yellow"));
            }
        }

        // map->addRoom(new PoisonRoom("poison-room", {1, 1}, "green", 10));
        PoisonRoom *poisonRoom = new PoisonRoom("poison-room", {1, 1}, "green", 10);
        map->addRoom(poisonRoom);
        // map->addRoom(new TrapRoom("trap-room", {2, 2}, "red", 20));
        TrapRoom *trapRoom = new TrapRoom("trap-room", {2, 2}, "red", 20);
        map->addRoom(trapRoom);


        // create two character objects
        player = new Player(startRoomPosition);
        monster = new Monster(endRoomPosition);

        activeCharacter = player;

        std::cout << "Active player is: " << activeCharacter->getName() << std::endl;
        std::cout << "Player health: " << player->getHealth() << std::endl;

        player->sense(*this);
        monster->sense(*this);

        std::cout << "Trap Room position: " << "{" << trapRoom->getPosition()[0] << ", " << trapRoom->getPosition()[0] << "}" << std::endl;
        std::cout << "Poison Room position: " << "{" << poisonRoom->getPosition()[0] << ", " << poisonRoom->getPosition()[0] << "}" << std::endl;

        player->move({0, 1}, *poisonRoom);
        player->move({1, 0}, *poisonRoom);

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