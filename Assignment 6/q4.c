// 4. Write a program to calculate sum of squares of first N natural numbers
#include<stdio.h>
int main() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        sum = sum + (i * i);
    }
    printf("The sum of square of %d natural number is %d\n", num, sum);
    printf("2nd Method -> The sum of square of %d natural number is %d", num, (num * (num + 1) * (2 * num + 1)) / 6);
    return 0;
}