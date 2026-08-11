#include <stdio.h>

int main() {
int num1,num2,sum;
float average;
printf("Enter two Numbers:");
scanf("%d %d", &num1,&num2);
sum = num1+num2;
average = sum/2.0;
printf(" The sum is %d ",sum);
printf(" The average is %.2f ",average);
    return 0;
}