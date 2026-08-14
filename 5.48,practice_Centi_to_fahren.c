#include <stdio.h>

int main() {
float cen,fah;
printf("Enter centigrade:");
scanf("%f",&cen);
fah = ((cen*9)/5)+32;
printf("Fharenheit is %.2f\n",fah);

    return 0;
}