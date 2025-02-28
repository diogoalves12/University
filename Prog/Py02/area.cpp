#include <iostream>
#include <cmath>

int area(int base, int height){
  return round(0.5 * base* height);
}

int area(int a, int b, int c){
  double s = (a + b + c) / 2.0;
  double A = sqrt(s * (s- a) * (s - b) * (s - c));
  return round(A)
}

int main(){
  return 0;
}