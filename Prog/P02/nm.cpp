#include <iostream>
using namespace std;

unsigned long elevar(unsigned long n){
    unsigned long counter = 1;
    for ( unsigned long i=0; i < n; i++ ){
        counter *= 2;
    }
    return counter;
}   


unsigned long next_mersenne(unsigned long n){
    if (n == 0) return 0;
    for (unsigned long i; i <= n ; i++){
        if(elevar(i)-1 >= n){
            return elevar(i)-1;
        }
    }
    return n;
}  
