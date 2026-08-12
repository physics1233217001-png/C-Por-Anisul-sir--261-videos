#include <stdio.h>

int main() {
int hight,base,area;
printf("Enter base of triangle:\n");
scanf("%d ", &base);
printf("Enter hight of triangle:\n");
scanf("%d", &hight);
area = .5*base*hight;   
printf(" The area of triangle is %d", area);
    return 0;
}