// 7. Write a program to print all Prime numbers between two given numbers
#include<stdio.h>
int main() {
    int temp = 0, i, j;
    int num1, num2;
    printf("Enter two number: ");
    scanf("%d %d", &num1, &num2);

    for (i = num1; i <= num2; i++) {
        temp = 0;
        for (j = 2; j < i; j++) {
            if (!(i % j)) {
                temp++;
                break;
            }
        }
        if (!(temp == 1)) {
            printf("%d ", i);
        }
    }
    return 0;
}