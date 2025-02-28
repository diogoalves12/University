#include <iostream>



unsigned long next_mersenne(unsigned long n){
  unsigned long res = 1;

  while (res - 1 < n) {
    res *= 2;
  }

  return res - 1;
}

int main(){

  return 0;
}