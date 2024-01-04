//
// Created by ed028348 on 1/4/2024.
//

#include "Queue.h"

/**
 * Constructor of the queue class. Because BFS needs a queue implementation, the queue is constructed here.
 */
    Queue::Queue() {
        first = nullptr;
        last = nullptr;
    }

/**
* This is a deletion function for queues need to be deleted.
*/
    Queue::~Queue() {
        Node *tmp = first;
        Node *next;
        while (tmp != nullptr) {
            next = tmp->getNext();
            delete tmp;
            tmp = next;
        }
    }
/**
 * Is empty for queue class. Returns true if it is empty.
 * @return
 */
    bool Queue::isEmpty() {
        return first == nullptr;
    }
/**
 * This function takes the first element of the queue and removes from it. Returns that node.
 * @return
 */
    Node *Queue::dequeue() {
        Node *result = first;
        if (!isEmpty()){
            first = first->getNext();
            if (first == nullptr){
                last = nullptr;
            }
        }
        return result;
    }
/**
 * This method adds the given node as the last element.
 * @param newNode
 */
    void Queue::enqueue(Node *newNode) {
        if (first == nullptr) {
            first = newNode;
        } else {
            last->setNext(newNode);
        }
        last = newNode;
    }
