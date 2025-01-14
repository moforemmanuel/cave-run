//
// Created by manuel on 1/14/25.
//

#ifndef PLAYER_H
#define PLAYER_H
#include "Character.h"

namespace CaveRun {
    class Player : public Character {
        int health;
        bool isPoisoned;

    public:
        Player(std::vector<int> _currentRoomPosition);

        ~Player() override;

        void takeDamage(const int damage);

    };

} // CaveRun

#endif //PLAYER_H
