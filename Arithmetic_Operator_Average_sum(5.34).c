#include <stdio.h>

int main() {
int num1,num2,sum;
float average;
printf("Enter two Numbers:");
scanf("%d %d", &num1,&num2);
sum = num1+num2;
average = sum/2.0;
average = (float)sum/2; // type castings, those are same as above line
printf(" The sum is %d ",sum);
printf(" The average is %.2f ",average);
    return 0;
}