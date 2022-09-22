#include <stdio.h>
#include <math.h>

double firstFunc(int x){
    if (x > 0) return exp(-x) * sin(x);
    else return exp(x) * sin(x);
}

double secondFunc(int x){
    if (x > 0) return exp(-x) * cos(x);
    else return exp(x) * cos(x);
}

int main(){
    float x;
    printf("X => ");
    scanf("%f", &x);
    printf("Func f(x) = %f\n", firstFunc(x));
    printf("Func g(x) = %f\n", secondFunc(x));
    return 0;   
}
