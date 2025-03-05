#include "interval.h"
#include <iostream>

using namespace std;

bool maior(time_of_day a, time_of_day b) {
  return (a.h > b.h) || (a.h == b.h && a.m >= b.m);
}

interval intersection(interval a, interval b) {
  if (maior(a.start, b.end) || maior(b.start, a.end)) {
    return {{0, 0}, {0, 0}};
  }

  time_of_day start = maior(a.start, b.start) ? a.start : b.start;
  time_of_day end = maior(a.end, b.end) ? b.end : a.end;

  return {start, end};
}

int main(){
  return 0;
}


