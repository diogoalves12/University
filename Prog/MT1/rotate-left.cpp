#include "print_array.h"


void rotate_one(int a[], int n){
  int first =  a[0];
  for(int i = 0; i < n - 1; i++){
    a[i] = a[i + 1];
  }
  a[n - 1] = first;
}

void rotate_left(int a[], int n, int k){
  if(n <= 1 || k < 0) return;

  for(int i = 0; i < k; i++){
    rotate_one(a,n);
  }

}