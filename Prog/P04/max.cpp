#include <iostream>

using namespace std;

int max(const int a[], int n){
  int curMax = a[0];
  for(int i = 1; i < n; i++){
    if(a[i] > curMax) curMax = a[i];
  }
  return curMax;
}

int main(){
  return 0;
}