//
// Created by manuel on 1/14/25.
//

#include "Player.h"

#include "PoisonRoom.h"
#include "Game.h"

namespace CaveRun {
    Player::Player(std::vector<int> _currentRoomPosition)
    : Character("player", "player", "blue", 'P', 2, 2, _currentRoomPosition) {
        health = 100;
        poisoned = false;
    }

    Player::~Player() {}

    void Player::takeDamage(const int damage) {
        health -= damage;
        if (health <= 0) {
            std::cout << "Player died!" << std::endl;
            exit(0);
        }
    }

    std::vector<int> Player::move(const std::vector<int> &position, PoisonRoom &poisonRoom) {
        setCurrentRoomPosition(position);

        if (isPoisoned()) { takeDamage(poisonRoom.getPoisonDamage()); }
        return getCurrentRoomPosition();
    }

    void Player::sense(const Game &game) const {
        std::vector<int> monsterPosition = game.getMonsterPosition();
        std::cout << "Monster position: " << "{" << monsterPosition[0] << ", " << monsterPosition[1] << "}"<< std::endl;
    }


} // CaveRun