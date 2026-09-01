#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter 3 Number");
    scanf(" %d %d %d", &num1, &num2, &num3);
    if (num1 > num2 && num1 > num3)
        printf("Lerge Number is =%d", num1);
    else if (num2 > num1 && num2 > num3)
        printf("Lerge Number is =%d", num2);
    else if (num3 > num1 && num3 > num2)
        printf("Lerge Number is =%d", num3);
    else
        printf("Numbers are equal");

    return 0;
}