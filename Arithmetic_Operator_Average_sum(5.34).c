#include <stdio.h>

int main() {
int num1,num2,sum,average;
printf("Enter two Numbers:");
scanf("%d %d", &num1,&num2);
sum = num1+num2;
average = sum/2;
printf(" The sum is %d ",sum);
printf(" The average is %d ",average);
    return 0;
}