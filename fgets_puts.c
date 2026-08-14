#include <stdio.h>

int main() {
    char name[50];
    printf("Enter your name: ");
    fgets(name , sizeof(name) , stdin); // Read a line of text from standard input and store it in the 'name' array
    printf("hello ");
    puts(name); // Print the string stored in 'name' to standard output, followed by a newline character
    return 0;
}