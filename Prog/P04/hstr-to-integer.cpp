#include <iostream>
#include <cmath>

using namespace std;

unsigned long hstr_to_integer(const char hstr[]){
    unsigned long n = 0, value = 0, temp, temp2;

    while (hstr[n] != 0){
        n++;
    }
    n--;
    for (int i = n; i >= 0; i--) {
        if (hstr[i] <= '9') {
            temp = int(hstr[i]) - 48;
        } else if (hstr[i] >= 'a') {
            temp = int(hstr[i]) - 87;
        } else {
            temp = int(hstr[i]) - 55;
        }
        temp2 = pow(16, n - i);
        value += temp * temp2;
    }
    return value;
}