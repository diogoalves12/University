#include <iostream>

using namespace std;

int main(){
  int n, x1, x2;
  cin >> n >> x1;

  if(n == 2){
    cin >> x2,
    cout << 2 << endl;
    return 0;
  }

  int maxCount = 2, curCount = 2, diff;
  cin >> x2;
  diff = x2 -x1;
  x1 = x2;

  while(--n > 1){
    cin >> x2;
    if(x2 -x1 == diff) curCount++;
    else {
      maxCount = maxCount > curCount ? maxCount : curCount;
      curCount = 2;
      diff = x2 - x1;
    }

    x1 = x2;
  }

  maxCount = maxCount > curCount ? maxCount : curCount;
  cout << maxCount << endl;
  return 0;
}