// Write a program to check whether the given number is even or odd using a bitwise  operator.
#include<stdio.h>
int main() {
    //  doubt
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num&1 == 1) {
        printf("%d is an odd number", num);
    } else {
        printf("%d is an even number", num);
    }
    return 0;
}