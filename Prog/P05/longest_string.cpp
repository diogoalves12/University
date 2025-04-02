#include <iostream>

const char* longest(const char* pa[]) {
    int size = 0;
    while(pa[size] != nullptr) size++;

    int k = 0;
    int longest = 0;
    for (int i = 0; i < size; i++) {
        int len = 0;
        while(pa[i][len] != '\0') len++;

        if (longest < len || (longest == len && i > k)){
            longest = len;
            k = i;
        }
    }

    return pa[k];
}