//
// Created by Chibiken on 2020/11/9.
//

#ifndef SORT_CLION_SORT_H
#define SORT_CLION_SORT_H

#include "linkList.h"

template<typename T>
void selectionSort(linkList<T> list) {
    int n = list.length();

    for (int i = 0; i < n - 1; i++) {
        int lowIndex = i;
        for (int j = n - 1; j > i; j--)
            if (list.data(j) < list.data(lowIndex))
                lowIndex = j;

        list.swap(i, lowIndex);
    }

    return;
}

template<typename T>
void insertionSort(linkList<T> list) {
    int n = list.length();

    for (int i = 1; i < n; i++)
        for (int j = i; (j > 0) && (list.data(j) < list.data(j - 1)); j--)
            list.swap(j, j - 1);
}

template<typename T>
void insertionSort2(linkList<T> list) {
    int n = list.length();

    for (int i = 1; i < n; i++) {
        int low = 0;
        int high = i;
        int mid = 0;

        while (low<=high) {
            mid = (low+high)/2;
            if (list.data(i) <= list.data(mid))
                break;
            else
                high = mid - 1;
        }

        list.swap(i, mid);
    }
}



#endif //SORT_CLION_SORT_H
