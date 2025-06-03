//
// Created by Diogo Alves on 03/06/2025.
//

#include <iostream>
#include <sstream>
#include "Date2.h"
#include <string>
using namespace std;

Date::Date() : Date(1,1,1){
}

Date::Date(int year, int month, int day) : year(year), month(month), day(day){
    int d[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if(year%400 == 0 || (year%4 == 0 && year%100 != 0)){
        d[2] = 29;
    }
    if(year > 9999 || year < 1 ){
        this->year = 0;
        this->month = 0;
        this->day = 0;
    }else if(month > 12 || month < 1 ){
        this->year = 0;
        this->month = 0;
        this->day = 0;
    }else if(day > d[month] || day < 1 ){
        this->year = 0;
        this->month = 0;
        this->day = 0;
    }
}
Date::Date(const string& year_month_day) {
    istringstream dt(year_month_day);
    int ds[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int y, m, d;
    char temp;

    dt >> y;
    year = y;
    if(year%400 == 0 || (year%4 == 0 && year%100 != 0)){
        ds[2] = 29;
    }
    dt >> temp;
    if(temp == '/'){
        dt >> m;
        month = m;
        dt >> temp;
        if(temp == '/'){
            dt >> d;
            day = d;
            if(!dt.eof()){
                this->year = 0;
                this->month = 0;
                this->day = 0;
            }
        }else{
            this->year = 0;
            this->month = 0;
            this->day = 0;
        }
    }else{
        this->year = 0;
        this->month = 0;
        this->day = 0;
    }
    if(year > 9999 || year < 1 ){
        this->year = 0;
        this->month = 0;
        this->day = 0;
    }else if(month > 12 || month < 1 ){
        this->year = 0;
        this->month = 0;
        this->day = 0;
    }else if(day > ds[month] || day < 1 ){
        this->year = 0;
        this->month = 0;
        this->day = 0;
    }
}

bool Date::is_valid() const{
    if( year == 0 || month == 0 || day == 0){
        return false;
    }else{
        return true;
    }
}

int Date::get_year() const{
    return year;
}

int Date::get_month() const{
    return month;
}

int Date::get_day() const{
    return day;
}