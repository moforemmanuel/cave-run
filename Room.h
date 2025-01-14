//
// Created by manuel on 1/14/25.
//

#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <vector>
#include "Player.h"

namespace CaveRun {
        class Room {
            std::string id;
            std::vector<int> position;
            std::string color;
            char label;

        public:
            Room(std::string _id, std::vector<int> _position, std::string _color, char _label);

            virtual ~Room();

            std::string getId() const { return id; }
            std::vector<int> getPosition() const { return position; }
            std::string getColor() const { return color; }

            virtual void visit(Player& player) const;
        };

} // CaveRun

#endif //ROOM_H
