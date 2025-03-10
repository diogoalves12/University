#include <iostream>
#include "interval.h"
using namespace std;

bool time(time_of_day a, time_of_day b){
  if (a.h > b.h){
    return true;
  } else if (a.h == b.h){
    if (a.m >= b.m){
      return true;
    }
    return false;
  }
  return false;
}

int search_intervals(time_of_day t, const interval a[], int n, interval& u){
  bool Found = false;
  u = { t, t };

  for (int i = 0; i < n; i++){
    if (time(t,a[i].start) && (!time(t,a[i].end))){
      if (time(u.start,a[i].start)){
        u.start = a[i].start;
      }
      if (!time(u.end,a[i].end)){
        u.end =a[i].end;
      }
      Found = true;
    }
  }
  if (!Found){
    return 0;
  } else{
    return (u.end.h - u.start.h)*60 + u.end.m - u.start.m;
  }
}