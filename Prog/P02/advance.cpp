#include <iostream>
using namespace std;

int months(int m,int y){
    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
        return 31;
    }else if(m == 4 || m == 6 || m == 9 ||m ==11){
        return 30;
    }else if ((y%4 == 0 && y%100 != 0) || y%400 == 0){
        return 29;
    }else{
        return 28;
    }
}

void advance(int delta, int& d, int& m, int& y){
    d += delta;
    while(d > months(m,y)){
        d -= months(m,y);
        m++;
        if (m == 13){
            m = 1;
            y++;
        }
    }
}