//
// Created by ASUS on 2020/11/2.
//

#ifndef LINKLIST_CLION_LINKLIST_H
#define LINKLIST_CLION_LINKLIST_H

#include "linkNode.h"

/*
 *  A node list that contain many nodes
 */

template<typename T>
class linkList {
public:
    linkNode<T> *head;
    linkNode<T> *tail;
    linkNode<T> *cur;
    int count;

    linkList() {
        head = tail = cur = NULL;
        count = 0;
    }

    ~linkList() { free(head); }

    void clear() {
        cur = head->next;
        linkNode<T> *temp = NULL;

        while (cur != NULL) {
            temp = cur;
            free(cur);
            cur = temp;
        }

        count = 0;
    }

    inline int length() { return count; }

    void append(T data) {

        if (!head)
            tail = head = cur = new linkNode<T>(data);
        else
            tail = cur = tail->next = new linkNode<T>(data);

        count++;
    }

    void swap(int i, int j) {
        if(!searchByLocation(i) || !searchByLocation(j))
            return;

        T temp = this->searchByLocation(i)->data;
        this->searchByLocation(i)->data = this->searchByLocation(j)->data;
        this->searchByLocation(j)->data = temp;
    }

    // return pointer to node
    linkNode<T> *search(T data) {
        cur = head;

        while (cur != NULL) {
            if (cur->data == data)
                return cur;
            cur = cur->next;
        }

        return NULL;
    }

    // return pointer to node
    linkNode<T> *searchByLocation(int location) {
        cur = head;
        int i = location;

        while (i > 0) {
            cur = cur->next;
            i--;

            if (!cur->next)
                return NULL;
        }

        return cur;
    }

    // return some data location given
    T data(int location) {
        cur = head;
        int i = location;

        while (i > 0) {
            cur = cur->next;
            i--;

            if (!cur)
                return NULL;
        }

        return cur->data;
    }

    // to print data
    void show() {
        cur = head;

        while (cur != NULL) {
            std::cout << cur->data << "\t";
            cur = cur->next;
        }
        std::cout << std::endl;

        return;
    }
};


#endif //LINKLIST_CLION_LINKLIST_H
