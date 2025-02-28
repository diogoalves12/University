#include <iostream>

int main(){
  int n;
  std::cin >> n;

  int reversed = 0;

  while(n > 0){
    int digit = n % 10;
    reversed = reversed * 10 + digit;
    n /=  10;
  }

  std::cout << reversed << std::endl;
  return 0;
}