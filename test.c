#include <stdio.h>

int main()
{
    int hight, base;
    float area;

    printf("Enter base of triangle: ");
    scanf("%d", &base);

    printf("Enter hight of triangle: ");
    scanf("%d", &hight);

    area = 0.5 * base * hight;

    printf("The area of triangle is %.2f", area);

    return 0;
}