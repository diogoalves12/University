#include "cdata.h"

// 'a' is a pointer because arrays decay into pointers when passed to functions.
int* expand_cdata(const cdata a[], int n){
    int len = 0;
    for (int i = 0; i < n; i++) len += a[i].count;

    int* arr = new int[len];
    int index = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < a[i].count; j++){
	        arr[index++] = a[i].value;
        }
    }
    return arr;
}
