//
// Created by ed028348 on 1/4/2024.
//

#include "Node.h"

/**
 * Constructor of the node class. Takes a string as a data due to all words are strings.
 * @param data
 */
Node::Node(std::string data) {
    this->data = data;
    this->next = nullptr;
}
// GETTERS AND SETTERS BELOW HERE
void Node::setNext(Node *_next) {
    this->next = _next;
}

Node *Node::getNext() {
    return next;
}

std::basic_string<char> Node::getData() const {
    return data;
}
