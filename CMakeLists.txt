cmake_minimum_required(VERSION 3.25)
project(graph_puzzle_game_erendarak)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_executable(graph_puzzle_game_erendarak
        src/Main.cpp
        src/Main.h src/Graph.h src/Graph.cpp src/Edge.h src/Edge.cpp src/EdgeList.h src/EdgeList.cpp src/Queue.cpp src/Queue.h src/Node.cpp src/Node.h)
