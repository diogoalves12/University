#include "interval.h"

int calculate_time(time_of_day a, time_of_day b){
    return ((b.h * 60) + b.m) - ((a.h * 60) + a.m);
}


interval largest(const interval a[], int n) {
    interval curBigger = a[0];

    for(int i = 1; i < n; i++){
        if(calculate_time(curBigger.start, curBigger.end) < calculate_time(a[i].start, a[i].end)){
          curBigger = a[i];
        }
    }

    return curBigger;
}