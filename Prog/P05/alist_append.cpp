#include "alist.h"

void append(alist* a, const alist* b) {
    int size = a->size + b->size;
    int* list = new int [size];

    for (int i = 0;  i < a->size; i++) {
        list[i] = a->elements[i];
    }

    for (int i = 0; i < b->size; i++){
        list[i + a->size] = b->elements[i];
    }

    delete[] a->elements;

    a->size = size;
    a->elements = list;
}

