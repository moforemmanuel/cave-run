//
// Created by manuel on 1/14/25.
//

#ifndef POISONROOM_H
#define POISONROOM_H

#include "Room.h"

namespace CaveRun {

    class PoisonRoom : public Room {
        int poisonDamage;

    public:
        PoisonRoom(std::string _id, std::vector<int> _position, std::string _color, char _label, int _poisonDamage);

        int getPoisonDamage() const { return poisonDamage; }

        void visit(Player& player) const override;

    };

} // CaveRun

#endif //POISONROOM_H
