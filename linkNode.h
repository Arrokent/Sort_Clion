//
// Created by ASUS on 2020/11/2.
//

#ifndef LINKLIST_CLION_LINKNODE_H
#define LINKLIST_CLION_LINKNODE_H

#include <iostream>

/*
 *  A signal node contain data and next node pointer
 */

template <typename T>
class linkNode {
public:
    T data;
    linkNode* next;

    linkNode(T data, linkNode* next = NULL) {
        this->data = data;
        this->next = next;
    }
};


#endif //LINKLIST_CLION_LINKNODE_H
