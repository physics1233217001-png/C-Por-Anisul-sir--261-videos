#include <stdio.h>
#include <math.h>
int main() {
 double a,b,c,d,X1,X2;
 printf(" Enter a :");
 scanf("%lf",&a);
 printf(" Enter b :");
 scanf("%lf",&b);
 printf(" Enter c :");
 scanf("%lf",&c);
 d = sqrt((b*b)- (4*a*c) );
 X1 = (-b+d)/(2*a);
 X2 = (-b - d)/(2*a) ;
 printf("X1 = %lf",X1);
 printf("X2 = %lf",X2);



    
}