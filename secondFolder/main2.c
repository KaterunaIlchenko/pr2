#include <stdio.h>
#include <math.h>
#include "funcH.h"
int main(){
    float x;
    printf("X => ");
    scanf("%f", &x);
    printf("Func f(x) = %f\n", firstFunc(x));
    printf("Func g(x) = %f\n", secondFunc(x));
    return 0;
}
