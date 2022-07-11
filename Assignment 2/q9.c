// Write a program to print size of an int, a float, a char and a double type variable
#include <stdio.h>
int main()
{
    int i;
    float f;
    char c;
    double d;

    printf("Size of int is %d\nSize of float is %d\nSize of char is %d\nSize of double is %d", sizeof(i), sizeof(f), sizeof(c), sizeof(d));
    return 0;
}