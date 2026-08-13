#include <stdio.h>

int main() {
int num1 = 10 ;
int num2 = 5 ;
int temp;
temp = num1;
num1 = num2;
num2 = temp;
printf("The value of num1 is now %d\n",num1);
printf("The value of num2 is now %d",num2);

    return 0;
}