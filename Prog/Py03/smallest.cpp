#include "interval.h"

int totalMin(time_of_day a, time_of_day b){
  return ((b.h * 60) + b.m )- ((a.h * 60) + a.m);
}

interval smallest(const interval a[], int n){
  interval smallest = a[0];

  for(int i = 1; i < n; i++){
    if(totalMin(smallest.start, smallest.end)  > totalMin(a[i].start, a[i].end)){
      smallest = a[i];
    }
  }
  return smallest;
}