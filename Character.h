//
// Created by manuel on 1/14/25.
//

#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <vector>
// #include "Room.h"
#include "Game.h"

namespace CaveRun {
    class Character {
        std::string id;
        std::string name;
        std::string color;
        char label;
        int initialMoves;
        int moves;
        std::vector<int> currentRoomPosition;

    public:
        Character(std::string _id, std::string _name, const std::string &_color, char _label, int _initialMoves, int _moves,
                  const std::vector<int> &_currentRoomPosition);

        virtual ~Character();

        std::string getId() const { return id; }
        std::string getName() const { return name; }
        char getLabel() const {return label; }
        int getMoves() const { return moves; }
        std::string getColor() const { return color; }

        void setMoves(const int _moves) { this->moves = _moves; }

        bool canMove(const Game& game) const;
        virtual void resetMoves();
        std::vector<int> move(const std::vector<int> &position);
        // virtual void sense(const Game& game) const;
        // virtual void update();
        virtual void draw();
    };

} // CaveRun

#endif //CHARACTER_H
