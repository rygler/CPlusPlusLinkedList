//
// Created by Raphael Gal on 5/24/2017.
//

#ifndef LINKEDLIST_LINKEDLIST_H
#define LINKEDLIST_LINKEDLIST_H

#include <iostream>
#include <string>

using namespace std;

#include "Node.h"

class LinkedList {
private:
    Node *head;
    Node *tail;
    int size;

public:
    LinkedList();

    void addToHead(int i);

    void addToTail(int i);

    Node *getNodeAtIndex(int index);

    int getDataAtIndex(int index);

    ~LinkedList() {}
};

#endif //LINKEDLIST_LINKEDLIST_H
