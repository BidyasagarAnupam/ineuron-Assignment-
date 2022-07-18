// 3. Write a program to check whether a given number is there in the Fibonacci
// series or not.
#include<stdio.h>
int main() {
    int num1 = 1, num2 = 1, sum = 0, temp = 0;
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num == 1 || num == 2 || num == 3) {
        printf("%d is in the Fibonacci Series", num);
    }
    else {
        for (int i = 3; i <= num; i++) {
            sum = num1 + num2;
            if (sum == num) {
                temp++;
            }
            num1 = num2;
            num2 = sum;
        }
        if (temp == 1) {
            printf("%d is in the Fibonacci Series", num);
        }
        else {
            printf("%d is not in the Fibonacci Series", num);
        }
    }
    return 0;
}