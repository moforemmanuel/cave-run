//
// Created by manuel on 1/14/25.
//

#ifndef TRAPROOM_H
#define TRAPROOM_H

#include "Room.h"

namespace CaveRun {

class TrapRoom : public Room {
    int trapDamage;

public:
    TrapRoom(std::string _id, std::vector<int> _position, std::string _color, int _trapDamage);

    int getTrapDamage() const { return trapDamage; }

    void visit(Player& player) const override;
};

} // CaveRun

#endif //TRAPROOM_H
