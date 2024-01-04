//
// Created by ed028348 on 12/14/2023.
//

#ifndef GRAPH_PUZZLE_GAME_ERENDARAK_GRAPH_H
#define GRAPH_PUZZLE_GAME_ERENDARAK_GRAPH_H


#include "EdgeList.h"
#include <iostream>

class Graph{
private:
    EdgeList *edges;
    std::string *words;
public:
    Graph(int vertexCount);
    ~Graph();

    void addEdge(std::string from, std::string to);

    void BFS(std::string startNode, std::string endNode);

    void addWord(std::string string1);
};


#endif //GRAPH_PUZZLE_GAME_ERENDARAK_GRAPH_H
