// This program prompts the user to enter an integer, reads the input, and then prints the entered value to the console.2
#include <stdio.h>

int main() {
int a;
printf("Enter an integer: "); // Prompt the user to enter an integer3
scanf("%d", &a); // Read an integer input from the user and store it in variable 'a'
printf("You entered: %d\n", a); // Print the value of 'a' to the console 
// you can also use the following format specifiers to read and print different types of variables:
// %f for float, %lf for double, %c for char, %s for string, %d for integer, %u for unsigned integer, %x for hexadecimal, %o for octal
    return 0;
}