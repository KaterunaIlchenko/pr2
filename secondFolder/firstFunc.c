#include <stdio.h>
#include <math.h>

double firstFunc(int x){
    if (x > 0) return exp(-x) * sin(x);
    else return exp(x) * sin(x);
}

