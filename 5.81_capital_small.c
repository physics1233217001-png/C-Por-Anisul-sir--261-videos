#include <stdio.h>

int main()
{
    char ch;
    printf("Enter Charecter :");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
        printf("Capital later");

    else if (ch >= 'a' && ch <= 'z')
        printf("Small later");
    else
        printf("Not a later");
    return 0;
}