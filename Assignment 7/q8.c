// 8. Write a program to find next Prime number of a given number
#include<stdio.h>
int main() {
    int temp = 0, i, j;
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = num + 1; i >= 2; i++) {

        temp = 0;
        for (j = 2; j < i/2; j++) {
            if (!(i % j)) {
                temp++;
                break;
            }
        }
        if (!(temp == 1)) {
            printf("%d ", i);
            break;
        }
    }
    return 0;
}