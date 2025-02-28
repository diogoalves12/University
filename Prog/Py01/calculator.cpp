#include <iostream>

int main(){
  float a,b;
  char operation;
  std::cin >> a >> operation >> b;

  switch(operation){
    case '+':
      std::cout << a + b << std::endl;
      break;
    case '-':
      std::cout << a - b << std::endl;
      break;
    case '*':
      std::cout << a * b << std::endl;
      break;
    case '/':
      if(b == 0) {
        std::cout << "invalid operand: divisor cannot be 0" << std::endl;
        break;
      }
      std::cout << a / b << std::endl;
      break;
    default:
      std::cout << "invalid operation" << std::endl;
  }

  return 0;
}