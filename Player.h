//
// Created by manuel on 1/14/25.
//

#ifndef PLAYER_H
#define PLAYER_H
#include "Character.h"
#include "PoisonRoom.h"

namespace CaveRun {
    class Player : public Character {
        int health;
        bool poisoned;

    public:
        Player(std::vector<int> _currentRoomPosition);

        ~Player() override;

        bool isPoisoned() const { return poisoned; }
        void setIsPoisoned() { poisoned = true; }

        int getHealth() const { return health; }
        void setHealth(int _health) { health = _health; }

        void takeDamage(const int damage);

        std::vector<int> move(const std::vector<int> &position, const PoisonRoom &poisonRoom);

    };

} // CaveRun

#endif //PLAYER_H
