#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int solve_eq(int a, int b, int c, double& x1, double& x2)
{
    int res;
    int delta = (b * b) - (4 * a * c);
    if (delta < 0){
        res = 0;
       x1 = NAN;
       x2 = NAN; 
       return res;
    }
    else if (delta == 0){
        res = 1;
        x1 = (-b / (2.0 * a));    
        x2 = NAN;
        return res;    
    }
    else {
        res = 2;
        x1 = ((-b - sqrt(delta)) / (2.0 * a));
        x2 = ((-b + sqrt(delta)) / (2.0 * a));
        return res;
    }
}