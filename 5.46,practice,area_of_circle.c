// this program is to find the area of circle
#include <stdio.h>

int main() {
float pi = 3.1416,radious;
double area;
printf("Enter Radious:");
scanf("%f",&radious);
area = pi*radious*radious;
printf(" Area is %.3f",area);
    return 0;
}