// Write a program to find the position of first 1 in LSB.
#include<stdio.h>
int main() {
    // doubt
    int num, count = 0, result = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        result = num & 1;
        count++;
        if (result == 1) {
            printf("%d", count);
            break;
        }
        num=num>>1;
    }
    return 0;
}