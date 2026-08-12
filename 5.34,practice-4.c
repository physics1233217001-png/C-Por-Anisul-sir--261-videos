//area of triangle
#include <stdio.h>

int main() {
float base,hight,area;
printf("Enter base  of triangle:");
scanf("%f", &base);
printf("Enter hight of triangle:");
scanf("%f", &hight);
area = .5*base*hight;
printf(" The area of triangle is %.2f", area);
    return 0;
}