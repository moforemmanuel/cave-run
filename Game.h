//
// Created by manuel on 1/14/25.
//

#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <vector>
// #include "Player.h"
// #include "Monster.h"
#include "Map.h"

namespace CaveRun {

    class Player; // Forward declaration
    class Monster; // Forward declaration
    class Character;

class Game {
    Map *map;
    Player *player;
    Monster *monster;
    std::vector<int> startRoomPosition;
    std::vector<int> endRoomPosition;
    const Character *activeCharacter;

public:
    Game(const Map &_map, const Player &_player, const Monster &_monster, const std::vector<int> &_startRoomPosition, const std::vector<int> &_endRoomPosition);
    ~Game();

    const Character* getActiveCharacter() const { return activeCharacter; }
    void setActiveCharacter(const Character* character) { activeCharacter = character; }


    void initialize();
    void run();
    void endGame();
    bool checkGameOver();
};

} // CaveRun

#endif //GAME_H
