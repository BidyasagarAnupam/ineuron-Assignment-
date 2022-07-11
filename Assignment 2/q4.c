// Write a program to swap values of two int variables without using a third variable.
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Logic for swapping
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping the numbes are %d and %d", a, b);
    return 0;
}