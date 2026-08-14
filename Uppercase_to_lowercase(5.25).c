#include <stdio.h>

int main() {
char uppercase;
printf("Enter a uppercase letter: ");
scanf("%c",&uppercase);  
printf(" the lowercase latter is %c",uppercase+32);
// the asscii value of uppercase letter is 32 less than the lowercase letter. so we can add 32 to the uppercase letter to get the lowercase letter.
    return 0;
    
}