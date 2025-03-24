#include <climits>
#include <iostream>
#include "print_array.h"

using namespace std;

void build(int arr[], int n){
    int cur = arr[0];
    for(int i = 1; i < n; i++){
        arr[i] += cur;
        cur = arr[i];
    }

}

int sum(int arr[], int a, int b){
    if (a > b) return 0;
    if (a == 0) return arr[b];
    return arr[b] - arr[a - 1];
}