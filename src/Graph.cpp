//
// Created by ed028348 on 12/14/2023.
//

#include "Graph.h"
#include "Queue.h"
#include <iostream>

/**
 * This is a deletion function for graphs need to be deleted.
 */
Graph::~Graph() {
    delete[] edges;
}

/**
 * This method adds an edge for given "from" node to "to" node.
 * @param from
 * @param to
 */
void Graph::addEdge(std::string from, std::string to) {
    Edge* edge = new Edge(from, to, 1);
    edges[from.length()].insert(edge);
}

/**
 * This is the Breadth First Search method for our dictionary. It creates a queue with the nodes that is traversed. Until the end of the queue it searches for the target.
 * @param startNode
 * @param endNode
 */
void Graph::BFS(std::string startNode, std::string endNode) {
    int counter = 0, pathCounter = 0;
    std::string path[10];
    Edge* edge;
    std::string fromNode, toNode;
    Queue queue = Queue();
    queue.enqueue(new Node(startNode));
    while (!queue.isEmpty()){
        fromNode = queue.dequeue()->getData();
        edge = edges[fromNode.length()].getHead();
        while (edge != nullptr) {
            toNode = edge->getTo();
            for(int i = 0; i < fromNode.length(); i++){
                if (fromNode.at(i) != toNode.at(i)){
                    counter++;
                    queue.enqueue(new Node(toNode));
                }
                edge = edge->getNext();
            }
            if(counter == 1){
                path[pathCounter] = fromNode;
            }
        }
    }
    for(int j = 0; j < 10; j++){
        std::cout << path[j] << std::endl;
    }
}
/*
Path *Graph::dijkstra(int source) {
    Edge* edge;
    Path* shortestPaths = initializePaths(source);
    MinHeap heap = MinHeap(vertexCount);
    for (int i = 0; i < vertexCount; i++){
        heap.insert(HeapNode(shortestPaths[i].getDistance(), i));
    }
    while (!heap.isEmpty()){
        HeapNode node = heap.deleteTop();
        int fromNode = node.getName();
        edge = edges[fromNode].getHead();
        while (edge != nullptr){
            int toNode = edge->getTo();
            int newDistance = shortestPaths[fromNode].getDistance() + edge->getWeight();
            if (newDistance < shortestPaths[toNode].getDistance()){
                int position = heap.search(toNode);
                heap.update(position, newDistance);
                shortestPaths[toNode].setDistance(newDistance);
                shortestPaths[toNode].setPrevious(fromNode);
            }
            edge = edge->getNext();
        }
    }
    return shortestPaths;
}
*/
/**
 * This function added due to given main class includes it. Normally, its not necessary to store added words, just we need to implement adjacency list and edges for words
which has 1 character difference.
 * It stores words in an array with specific initialization.
 * @param string1
 */
void Graph::addWord(std::string string1){
    for(int i = 0; i< 10; i++){
        if(words[i].empty()){
            words[i] = string1;
        }
    }
}

/**
 * Constructor of the graph which makes a linked list for every element on the array (edges)
 * @param vertexCount
 */
Graph::Graph(int vertexCount) {
    edges = new EdgeList[vertexCount];
    for (int i = 0; i < vertexCount; i++) {
        edges[i] = EdgeList();
    }
}