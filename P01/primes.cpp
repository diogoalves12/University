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

int main(){
  int n;
  cin>>n;

  for(int i = 2; i <= n; i++){
    if(is_Prime(i)){
      cout<< i << " ";
    }
  }
  return 0;
}


