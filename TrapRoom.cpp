//
// Created by manuel on 1/14/25.
//

#include "TrapRoom.h"
#include "Player.h"

namespace CaveRun {
    TrapRoom::TrapRoom(std::string _id, std::vector<int> _position, std::string _color, int _trapDamage):
    Room(_id, _position, _color), trapDamage(_trapDamage) {}

    void TrapRoom::visit(Player& player) const {
        player.takeDamage(trapDamage);
    }

} // CaveRun