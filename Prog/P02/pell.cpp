#include <iostream>
using namespace std;

unsigned long pell(unsigned long n){    
    unsigned long antes = 0, depois = 1;
    unsigned long res = 1;

    if (n == 0) {
        return 0;
    }
    else if(n == 1) {
        return 1;
    }
    else {
        for (unsigned long i = 2; i <= n; i++){
        res = 2 * depois + antes;
        antes = depois;
        depois = res;
        }
    }
    return res;
}