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
printf("Sum is %d\n",sum);
printf("Average is %.2f\n",avg);
printf("Multiplication is %d\n",multiplication);  
printf("Remainder is %d\n",remainder);

    return 0;
}