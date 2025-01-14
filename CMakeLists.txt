cmake_minimum_required(VERSION 3.30)
project(CaveRun)

set(CMAKE_CXX_STANDARD 20)

add_executable(CaveRun main.cpp
        Character.cpp
        Character.h
        Room.cpp
        Room.h
        Player.cpp
        Player.h
        Map.cpp
        Map.h
        Game.cpp
        Game.h
        Monster.cpp
        Monster.h
        TrapRoom.cpp
        TrapRoom.h
        PoisonRoom.cpp
        PoisonRoom.h
)
