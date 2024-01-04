//
// Created by ed028348 on 1/4/2024.
//

#ifndef GRAPH_PUZZLE_GAME_ERENDARAK_QUEUE_H
#define GRAPH_PUZZLE_GAME_ERENDARAK_QUEUE_H
#include "Node.h"

class Queue {
private:
    Node* first;
    Node* last;
public:
    Queue();
    ~Queue();
    bool isEmpty();
    Node* dequeue();
    void enqueue(Node* newNode);
};



#endif //GRAPH_PUZZLE_GAME_ERENDARAK_QUEUE_H
