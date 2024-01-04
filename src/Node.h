//
// Created by ed028348 on 1/4/2024.
//

#ifndef GRAPH_PUZZLE_GAME_ERENDARAK_NODE_H
#define GRAPH_PUZZLE_GAME_ERENDARAK_NODE_H

#include <string>


class Node {
private:
    std::string data;
    Node* next;
public:
    explicit Node(std::string data);
    void setNext(Node* _next);
    Node* getNext();

    std::basic_string<char> getData() const;
};


#endif //GRAPH_PUZZLE_GAME_ERENDARAK_NODE_H
