// 2. Write a program to print first N terms of Fibonacci series
#include<stdio.h>
int main() {

    int num1 = 1, num2 = 1, sum = 0;
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num == 1) {
        printf("1");
    }
    else if (num == 2) {
        printf("1 1");
    }
    else {
        printf("1 1 ");
        for (int i = 3; i <= num; i++) {
            sum = num1 + num2;
            printf("%d ", sum);
            num1 = num2;
            num2 = sum;
        }
    }
    return 0;
}