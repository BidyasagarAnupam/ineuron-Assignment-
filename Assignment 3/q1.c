// Write a program to check whether a given number is positive or non-positive.
#include<stdio.h>
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a>0) {
        printf("%d is a positive nymber", a);
    } else {
        printf("%d is a non-positive number", a);
    }
    return 0;
}