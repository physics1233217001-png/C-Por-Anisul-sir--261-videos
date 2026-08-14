#include<stdio.h>
int main()
{
    char name[50];

    printf("enter your name :");
    scanf("%s", &name);

    printf("hello %s\n",name);
    puts(name);

    gets(name);

    printf("hello");
    puts(name);

    fgets(name, sizeof(name), stdin);
    puts(name);


    return 0;

}
