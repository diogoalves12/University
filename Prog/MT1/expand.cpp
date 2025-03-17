#include "print_array.h"

int expand(const int c[], const int v[], int n, int res[], int max){
    int index = 0;

    for(int i = 0; i < n; i++){
        int rep = c[i];

        if(rep > max - index) return -1
              ;
        for(int j = 0; j < rep; j++){
            res[index++] = v[i];
        }
    }

    return index;
}