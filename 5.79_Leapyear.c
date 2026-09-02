#include <stdio.h>

int main() {
int year;
printf("Enter year :");
scanf("%d",&year);
if(year % 400 == 0)
printf("Leap year");
else if(year %4==0 && year %100 !=0)
printf(" Leap Year");
else 
printf("Not leap year");
    return 0;
}