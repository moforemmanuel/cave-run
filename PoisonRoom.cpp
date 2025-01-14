//
// Created by manuel on 1/14/25.
//

#include "PoisonRoom.h"
#include "Player.h"

namespace CaveRun {
    PoisonRoom::PoisonRoom(std::string _id, std::vector<int> _position, std::string _color, char _label, int _poisonDamage):
    Room(_id, _position, _color, _label), poisonDamage(_poisonDamage) {}

    void PoisonRoom::visit(Player& player) const {
        player.takeDamage(poisonDamage);
        if (!player.isPoisoned()) { player.setIsPoisoned(); }
    }
} // CaveRun