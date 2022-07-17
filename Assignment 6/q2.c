// 2. Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
int main() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i=1; i<=num; i++) {
        sum = sum + (i*2);
    }
    printf("The sum of first %d even natural number is %d\n", num, sum);
    printf("2nd Method -> The sum of first %d even natural number is %d", num, num * (num + 1));
    return 0;
}