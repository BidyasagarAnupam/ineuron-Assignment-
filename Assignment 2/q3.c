// Write a program to swap values of two int variables
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    //  Logic for swapping
    c = a;
    a = b;
    b = c;
    printf("After swapping the numbes are %d and %d", a, b);
    return 0;
}