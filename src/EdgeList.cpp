//
// Created by ed028348 on 12/14/2023.
//

#include "EdgeList.h"

/**
 * Constructor of the edgeList class. It constructs in a linked list manner.
 */
EdgeList::EdgeList() {
    head = nullptr;
    tail = nullptr;
}

/**
 * This is a deletion function for edgeLists need to be deleted.
 */
EdgeList::~EdgeList() {
    Edge *tmp = head;
    Edge *next;
    while (tmp != nullptr) {
        next = tmp->getNext();
        delete tmp;
        tmp = next;
    }
}
/**
 * Is empty for edgeList class. Returns true if it is empty.
 * @return
 */
bool EdgeList::isEmpty() const {
    return head == nullptr;
}

/**
 * An insertion method for the edgeList. It takes the given edge and adds it to the end of the list.
 * @param newEdge
 */
void EdgeList::insert(Edge *newEdge) {
    if (head == nullptr) {
        head = newEdge;
    } else {
        tail->setNext(newEdge);
    }
    tail = newEdge;
}

// GETTERS AND SETTERS BELOW HERE
Edge *EdgeList::getHead() {
    return head;
}