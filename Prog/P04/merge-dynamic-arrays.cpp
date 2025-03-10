#include "print_array.h"

int* merge_arrays(const int a[], int na, const int b[], int nb){
    int* c = new int[na +nb];

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
    return c;
}


int main(){
    return  0;
}