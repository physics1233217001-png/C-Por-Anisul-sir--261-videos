#include <stdio.h>
int main() {
int num1,num2,num3,sum,remainder, multiplication;
printf("Enter three numbers:");
scanf("%d %d %d ",&num1,&num2,&num3);
float avg;
sum = (num1+num2+num3);
avg = sum/3.0;
multiplication = num1*num2*num3;
remainder = num1%num2;
printf("Sum is %d",sum);
printf("Average is %.2f",avg);
printf("Multiplication is %d",multiplication);  
printf("Remainder is %d",remainder);

    return 0;
}