#include <iostream>

using namespace std;

bool is_Prime(int n){
    if(n < 2) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;

    for(int i = 3; i * i <= n; i = i + 2){
        if(n % i == 0) return false;
    }
    return true;
}

int countOnes(int n){
  int count = 0;
  while(n > 0) {
    count += (n & 1);
    n = n >> 1;
  }
  return count;
}

bool is_pernicious(int n){
  return is_Prime(countOnes(n));
}

int main(){
  int a,b;

  cin >> a >> b;

  for(int i = a; i <= b; i++){
    if(is_pernicious(i) && is_Prime(i)){
      cout << i << " ";
    }
  }

  return 0;
}
