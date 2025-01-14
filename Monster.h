//
// Created by manuel on 1/14/25.
//

#ifndef MONSTER_H
#define MONSTER_H

#include "Character.h"

namespace CaveRun {

    class Monster : public Character {

    public:
        Monster(const std::vector<int> &_currentRoomPosition);

        ~Monster() override;

        void sense(const Game& game) const override;
    };

} // CaveRun

#endif //MONSTER_H
