#include <stdio.h>
#include <math.h>

int main() {
double x = 5.35;// unchanged from .1 to .4
double result = round(x);
printf(" round(%lf) = %.2lf",x,result);
    return 0;
}