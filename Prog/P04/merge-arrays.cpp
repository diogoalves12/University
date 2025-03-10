#include <iostream>
#include "print_array.h"

void merge_arrays(const int a[], int na, const int b[], int nb, int c[]){
    int i = 0, j = 0, k = 0;

    while(i < na && j < nb){
        if(a[i] > b[j]){
          c[k++] = b[j++];
        } else {
          c[k++] = a[i++];
        }
    }

    while(i < na){
        c[k++] = a[i++];
    }

    while(j < nb){
        c[k++] = b[j++];
    }
}


int main(){
  return 0;
}