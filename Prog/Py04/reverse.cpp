#include "print_array.h"

void reverse(int arr[], int n){
    int left = 0, rigth = n - 1;

    while(left < rigth){
        int temp = arr[left];
        arr[left] = arr[rigth];
        arr[rigth] = temp;

        left++;
        rigth--;
  }
}