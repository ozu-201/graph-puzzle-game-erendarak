//
// Created by ed028348 on 12/14/2023.
//

#include "Edge.h"
#include <iostream>

/**
 * Constructor of the edge class. Takes from, to nodes and a weight from to to if exists.
 * @param from
 * @param to
 * @param weight
 */
Edge::Edge(std::string from, std::string to, int weight) {
    this->from = from;
    this->to = to;
    this->weight = weight;
    next = nullptr;
}

// GETTERS AND SETTERS BELOW HERE
void Edge::setNext(Edge *_next) {
    next = _next;
}

Edge *Edge::getNext() const{
    return next;
}

int Edge::getWeight() const{
    return weight;
}

const std::string &Edge::getFrom() const {
    return from;
}

const std::string &Edge::getTo() const {
    return to;
}
