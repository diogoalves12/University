#include <iostream>

bool leap(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int sundays(int year) {
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int day_of_week = 0;
    int sunday_count = 0;

    for (int y = 1900; y <= year; ++y) {
        for (int m = 0; m < 12; ++m) {
            if (day_of_week == 6) {
                ++sunday_count;
            }

            if (m == 1 && leap(y)) {
                day_of_week = (day_of_week + 29) % 7;
            } else {
                day_of_week = (day_of_week + days_in_month[m]) % 7;
            }
        }
    }

    return sunday_count;
}

int main() {
    return 0;
}
