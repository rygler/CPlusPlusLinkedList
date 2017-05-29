//
// Created by Raphael Gal on 5/24/2017.
//

#ifndef LINKEDLIST_NODE_H
#define LINKEDLIST_NODE_H

class Node {
    Node *next;
    int data;

public:
    Node(int i);

    int getData();

    Node *getNext();

    void setNext(Node *node);
};

#endif //LINKEDLIST_NODE_H