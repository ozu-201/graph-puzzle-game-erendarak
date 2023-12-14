//
// Created by ed028348 on 12/14/2023.
//

#ifndef GRAPH_PUZZLE_GAME_ERENDARAK_GRAPH_H
#define GRAPH_PUZZLE_GAME_ERENDARAK_GRAPH_H


#include "EdgeList.h"

class Graph{
private:
    EdgeList *edges;
public:
    explicit Graph(int vertexCount);
    ~Graph();
};


#endif //GRAPH_PUZZLE_GAME_ERENDARAK_GRAPH_H
