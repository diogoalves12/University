#include <iostream>
#include "time_of_day.h"

using namespace std;

time_of_day tick(time_of_day t){
  t.m += 1;
  t.h += t.m / 60;
  t.m %= 60;
  t.h %= 24;
  return t;
}

int main(){
  return 0;
}