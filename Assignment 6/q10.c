// 10. Write a program to reverse a given number
#include<stdio.h>
int main() {
    int num, temp, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0) {
        temp = num % 10;
        sum = (temp + sum)*10;
        num = num /10;
    }
    printf("%d", sum/10);
    return 0;
}