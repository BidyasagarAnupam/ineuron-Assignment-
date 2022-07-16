/*
Write a program to take a three-digit number from the user and rotate its digits by 
one position towards the right.
*/
#include<stdio.h>
int main() {
    int a;
    printf("Enter a three digit number:  ");
    scanf("%d", &a);
    // TODO doubt solved
    printf("%d", (a % 10) * 100 + (a / 10));
    return 0;
}