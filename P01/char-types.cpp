#include <iostream>

using namespace std;

int main() {
  int number;
  cin >> number;

  int letters = 0,digits = 0, symbols = 0;

  char c;
  for (int i = 0; i < number; i++) {
    cin >> c;
    if(c >= '0' && c <= '9') {
      digits++;
    } else if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
      letters++;
    } else {
      symbols++;
    }
  }
  cout << letters << " " <<digits << " " << symbols << endl;
  return 0;
}