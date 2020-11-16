#include "linkList.h"
#include "sort.h"

int main() {
    linkList<int> ill;
    ill.append(5);
    ill.append(7);
    ill.append(3);
    ill.append(8);
    ill.append(0);
    ill.append(2);
    ill.append(6);
    ill.append(1);
    ill.append(4);
    ill.append(9);

    ill.show();

    selectionSort(ill);

    ill.show();

}
