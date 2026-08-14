// C program to find area of circle using math.h library
#include <stdio.h>
#include <math.h>

int main() {
    float radious,area;
    printf("Enter Radious:");
    scanf("%f",&radious);
    area =M_PI*radious*radious;
    printf(" Area is %.3f",area); 
    return 0;
}