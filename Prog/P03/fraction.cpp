#include "fraction.h"
#include <iostream>
using namespace std;

int gcd_rec(int a, int b){
    if(b == 0){
        return a;
    }
    return gcd_rec(b,a%b);
}

int gcd(int a, int b){
    int temp;
    if(a < 0){
        a = -a;
    }
    if(b < 0){
        b = -b;
    }
    if(b > a){
        temp = a;
        a = b;
        b = temp;
    }
    return gcd_rec(a,b);
}

fraction add(fraction a, fraction b){
    a.num = a.num*b.den + b.num*a.den;
    a.den *= b.den;
    int div = gcd(a.num,a.den);
    a.num /= div;
    a.den /= div;
    return a;
}


fraction mul(fraction a, fraction b){
    a.num *= b.num;
    a.den *= b.den;
    int div = gcd(a.num,a.den);
    a.num /= div;
    a.den /= div;
    return a;
}