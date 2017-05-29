//
// Created by Raphael Gal on 5/24/2017.
//

#include <iostream>
#include "LinkedList.h"

int main() {
    LinkedList *list = new LinkedList();
    list->addToHead(1);
    list->addToHead(2);
    list->addToTail(3);
    list->addToTail(4);

    std::cout << list->getDataAtIndex(0) << std::endl;
    std::cout << list->getDataAtIndex(1) << std::endl;
    std::cout << list->getDataAtIndex(2) << std::endl;
    std::cout << list->getDataAtIndex(3) << std::endl;

    return 0;
}