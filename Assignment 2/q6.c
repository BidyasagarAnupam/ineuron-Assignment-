// Write a program which takes a character as an input and displays its ASCII code.
#include<stdio.h>
int main() {
    char a;
    int x;

    printf("Enter a character: ");
    scanf("%c", &a);
    x = a;
    printf("The ASCII code for %c is %d", a,x);
    return 0;
}