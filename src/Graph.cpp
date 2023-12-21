//
// Created by ed028348 on 12/14/2023.
//

#include "Graph.h"


Graph::~Graph() {
    delete[] edges;
}

void Graph::addEdge(int from, int to) {
    Edge* edge = new Edge(from, to, 1);
    edges[from].insert(edge);
}

void Graph::breadthFirstSearch(bool *visited, int startNode) {
    Edge* edge;
    int fromNode, toNode;
    Queue queue = Queue();
    queue.enqueue(new Node(startNode));
    while (!queue.isEmpty()){
        fromNode = queue.dequeue()->getData();
        edge = edges[fromNode].getHead();
        while (edge != nullptr) {
            toNode = edge->getTo();
            if (!visited[toNode]){
                visited[toNode] = true;
                queue.enqueue(new Node(toNode));
            }
            edge = edge->getNext();
        }
    }
}
