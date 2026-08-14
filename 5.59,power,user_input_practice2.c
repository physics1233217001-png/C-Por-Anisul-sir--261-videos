#include <stdio.h>
#include <math.h>
int main() {
int a,b;
printf("Enter base :");
scanf("%d",&a);
printf("Enter power :");
scanf("%d",&b);
double result = pow(a,b);
printf(" Value is %.lf",result);

    return 0;
}