#include <iostream>

using namespace std;

int main(){
  int h, m, delta;

  cin >> h >> m >> delta;

  int totalMin = (h * 60 ) + m + delta;
  h = totalMin / 60;
  m = totalMin  % 60;

  if(h >= 24){
    h %= 24;
  }

  cout << h << " " << m;

  return 0;
}
