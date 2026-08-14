#include <stdio.h>
#include <math.h> // you need to include the math.h header for the sqrt function

int main() {
double a,b,c,s,area;
printf("Enter 1st value");
scanf("%lf",&a);
printf("Enter 2nd value");
scanf("%lf",&b);
printf("Enter 3rd value");
scanf("%lf",&c);
s=(a+b+c)/2;
area = sqrt(s*(s-a)*(s-b)*(s-c));
printf("area of triangle  is %lf",area);
    return 0;
}