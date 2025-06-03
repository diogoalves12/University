#include <iostream>
#include <sstream>
#include "Date3.h"
#include <string>
#include <iomanip>
using namespace std;

Date::Date() : yyyymmdd("00010101") {
}

Date::Date(int year, int month, int day) {
    int d[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if(year%400 == 0 || (year%4 == 0 && year%100 != 0)){
        d[2] = 29;
    }

    if(year > 9999 || year < 1 || month > 12 || month < 1 || day > d[month] || day < 1){
        yyyymmdd = "00000000";
    } else {
        ostringstream oss;
        oss << setw(4) << setfill('0') << year
            << setw(2) << setfill('0') << month
            << setw(2) << setfill('0') << day;
        yyyymmdd = oss.str();
    }
}

Date::Date(const string& year_month_day) {
    istringstream dt(year_month_day);
    int d[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int y, m, day;
    char temp;

    dt >> y;
    if(y%400 == 0 || (y%4 == 0 && y%100 != 0)){
        d[2] = 29;
    }
    dt >> temp;
    if(temp == '/'){
        dt >> m;
        dt >> temp;
        if(temp == '/'){
            dt >> day;
            if(!dt.eof()){
                yyyymmdd = "00000000";
                return;
            }
        } else {
            yyyymmdd = "00000000";
            return;
        }
    } else {
        yyyymmdd = "00000000";
        return;
    }

    if(y > 9999 || y < 1 || m > 12 || m < 1 || day > d[m] || day < 1){
        yyyymmdd = "00000000";
    } else {
        ostringstream oss;
        oss << setw(4) << setfill('0') << y
            << setw(2) << setfill('0') << m
            << setw(2) << setfill('0') << day;
        yyyymmdd = oss.str();
    }
}

bool Date::is_valid() const {
    return yyyymmdd != "00000000";
}

int Date::get_year() const {
    if (yyyymmdd == "00000000") return 0;
    return stoi(yyyymmdd.substr(0, 4));
}

int Date::get_month() const {
    if (yyyymmdd == "00000000") return 0;
    return stoi(yyyymmdd.substr(4, 2));
}

int Date::get_day() const {
    if (yyyymmdd == "00000000") return 0;
    return stoi(yyyymmdd.substr(6, 2));
}