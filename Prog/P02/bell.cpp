#include <iostream>
using namespace std;

unsigned long factorial(int n){
    unsigned long sum=1;
    if(n == 0 || n == 1){
        return 1;
    }
    while (n > 1)
    {
        sum *= n;
        n--;
    }
    return sum;
}

unsigned long bc(unsigned long n, unsigned long k){
 unsigned long formula = factorial(n)/(factorial(k)*factorial(n-k));
 return formula;
}

unsigned long bell(unsigned long n){
    unsigned long sum = 0;
    if(n == 0 || n == 1){
        return 1;
    }
    for(unsigned long k = 0; k < n; k++){
        sum += bc(n-1, k)*bell(k);
    }
    return sum;
}