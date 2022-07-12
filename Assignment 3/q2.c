// Write a program to check whether a given number is divisible by 5 or not
#include<stdio.h>
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if(a % 5 == 0) {
        printf("%d is divisible by 5", a);
    } else {
        printf("%d is not divisible by 5", a);
    }
    return 0;
}