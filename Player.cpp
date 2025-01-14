//
// Created by manuel on 1/14/25.
//

#include "Player.h"

namespace CaveRun {
    Player::Player(std::vector<int> _currentRoomPosition)
    : Character("player", "player", "blue", 'P', 2, 2, _currentRoomPosition) {
        health = 100;
        isPoisoned = false;
    }

    Player::~Player() {}

    void Player::takeDamage(const int damage) {
        health -= damage;
        if (health <= 0) {
            std::cout << "Player died!" << std::endl;
            exit(0);
        }
    }


} // CaveRun