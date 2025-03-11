#include <iostream>

unsigned long pell(unsigned long n){
    unsigned long pn_2 = 0, pn_1 = 1;
    unsigned long res = 1;

    if(n == 0 || n == 1) return (n == 0) ? 0 : 1;
    else {
        for(unsigned long i = 2; i <= n; i++) {
            res = 2 * pn_1  + pn_2;
            pn_2 = pn_1;
            pn_1 = res;
      }
    }
    return res;
}

