//
// Created by manuel on 1/14/25.
//

#include "Character.h"
#include "Game.h"
#include <utility>

namespace CaveRun {
    Character::Character(std::string _id, std::string _name, const std::string &_color, char _label, int _initialMoves, int _moves, const std::vector<int> &_currentRoomPosition):id(std::move(_id)),name(std::move(_name)),color(_color), label(_label), initialMoves(_initialMoves), moves(_moves), currentRoomPosition(_currentRoomPosition){}

    Character::~Character() {}

    bool Character::canMove(const Game& game) const {
        // return (game.getActiveCharacter() == this && this->getMoves() > 0);

        return (game.getActiveCharacter()->getId() == this->getId() && this->getMoves() > 0);
    }

    void Character::resetMoves() {
        setMoves(initialMoves);
    }

    std::vector<int> Character::move(const std::vector<int> &position) {
        setCurrentRoomPosition(position);
        return getCurrentRoomPosition();
    }

    void Character::draw() {
        std::cout << "Drawing Character" << std::endl;
    }
} // CaveRun