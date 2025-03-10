#include <iostream>

bool leap(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int sundays(int year) {
  int totalDays = 0;
  for(int i = 1900; i <= year; i++){
    if(leap(i)) totalDays  += 366;
    else totalDays += 365;
  }
  totalDays /= 7;
  return totalDays;

}

int main() {
    return 0;
}
