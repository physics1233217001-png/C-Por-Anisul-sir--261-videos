// This program demonstrates the use of the sizeof operator in C to determine the size of different data types.
#include <stdio.h>

int main() {
int a;
float b;
char c;
double d;
printf(" the size of int %d bytes\n", sizeof(a));
printf(" the size of float %d bytes\n", sizeof(b));
printf(" the size of char %d bytes\n", sizeof(c));
printf(" the size of double %d bytes\n", sizeof(d));
//you must use %d format specifier to print the size of data types in bytes, as sizeof returns a value of type size_t, which is an unsigned integer type. The %d format specifier is used to print integer values in C.
    return 0;
}