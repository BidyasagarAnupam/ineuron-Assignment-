// 1. Write a program to calculate sum of first N natural numbers
#include<stdio.h>
int main() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        sum = sum + i;
    }
    printf("The sum of first %d natural number is %d\n", num, sum);
    printf("2nd Method -> The sum of first %d natural number is %d\n", num, (num*(num+1))/2);
    return 0;
}