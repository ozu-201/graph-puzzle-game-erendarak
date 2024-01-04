//
// Created by ed028348 on 12/14/2023.
//

#ifndef GRAPH_PUZZLE_GAME_ERENDARAK_EDGELIST_H
#define GRAPH_PUZZLE_GAME_ERENDARAK_EDGELIST_H


#include "Edge.h"

class EdgeList {
private:
    Edge* head;
    Edge* tail;
public:
    EdgeList();
    ~EdgeList();
    bool isEmpty() const;
    void insert(Edge* newEdge);
    Edge* getHead();
};


#endif //GRAPH_PUZZLE_GAME_ERENDARAK_EDGELIST_H
