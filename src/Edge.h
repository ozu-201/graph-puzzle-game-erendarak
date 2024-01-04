//
// Created by ed028348 on 12/14/2023.
//

#ifndef GRAPH_PUZZLE_GAME_ERENDARAK_EDGE_H
#define GRAPH_PUZZLE_GAME_ERENDARAK_EDGE_H
#include <iostream>

class Edge {
private:
    std::string from;      //From node
    std::string to;        //To node
    int weight;            //Weight of the edge
    Edge* next;            //Pointer to the next node
public:
    Edge(std::string from, std::string to, int weight);
    void setNext(Edge* _next);
    Edge* getNext() const;
    int getWeight() const;
    const std::string &getFrom() const;
    const std::string &getTo() const;

};


#endif //GRAPH_PUZZLE_GAME_ERENDARAK_EDGE_H
