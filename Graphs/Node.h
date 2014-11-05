#ifndef NODE_H
#define NODE_H
#include <vector>


class Node{
public:
    Node(char newValue);

    void addAdjacent(Node*);

    std::vector <Node*> adjacentList; //contains all adjacent nodes
    std::vector <Node*>::iterator it; //iterator to allow access to adjacent nodes


    char letter;
    bool isVisited;
};

#endif // NODE_H