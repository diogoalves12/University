//
// Created by Diogo Alves on 05/06/2025.
//

#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

#include "Date.h"

using namespace std;

bool operator<(const Date& date1, const Date& date2){
    int d1 = date1.getYear() * 10000 + date1.getMonth() * 100 + date1.getDay();
    int d2 = date2.getYear() * 10000 + date2.getMonth() * 100 + date2.getDay();
    return d1 < d2;
}

ostream& operator<< (ostream& os, const Date& date) {
    const char sep = '/';
    os << setw(4) << setfill('0') << date.getYear() << sep <<
       setw(2) << setfill('0') << date.getMonth() << sep <<
       setw(2) << setfill('0') << date.getDay();
    return os;
}