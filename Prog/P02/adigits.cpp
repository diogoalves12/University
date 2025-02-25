#include <iostream>
using namespace std;

int adigits(int a, int b, int c){
    int bigger;
    bigger = a;
    if (b > bigger) bigger = b;
    if (c > bigger) bigger = c;

    int result;
    result = bigger * 100;
    if (bigger == a){
        result += (b > c) ? b * 10 + c : c * 10 + b;
    } else if ( bigger == b){
        result += (a > c) ? a * 10 + c : c * 10 + c;
    } else {
        result += (a > b) ? a * 10 + b : b * 10 + a;
    }

    return result;       
}

