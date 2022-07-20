// 8. Write a program to check whether a given number is a Prime number or
// not
#include<stdio.h>
int main() {
    int num, temp = 0, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 2; i <= num/2; i++) {
        if (!(num % i)) {
            temp++;
            break;
        }
    }
    if (temp == 1) {
        printf("%d is not a Prime number", num);
    }
    else {
        printf("%d is a Prime number", num);
    }
    return 0;
}