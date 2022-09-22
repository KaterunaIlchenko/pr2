#include <stdio.h>
#include <math.h>

double secondFunc(int x){
    if (x > 0) return exp(-x) * cos(x);
    else return exp(x) * cos(x);
}

