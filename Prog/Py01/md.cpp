#include <iostream>
#include <cmath>

using namespace std;

int main(){
  int distance = 0;

  int n;
  int x1,y1;
  int x2,y2;

  cin >> n;
  cin >> x1 >> y1;

  for(int i = 1; i < n; i++){
    cin >> x2 >> y2;
    distance += abs(x1 -x2) + abs(y1 - y2);
    x1 = x2;
    y1 = y2;
  }

  cout << distance << endl;
  return 0;
}