//
// Created by Raphael Gal on 5/24/2017.
//

#include "Node.h"

Node::Node(int i) {
    data = i;
}

int Node::getData() {
    return data;
}

Node *Node::getNext() {
    return next;
}

void Node::setNext(Node *node) {
    next = node;
}
