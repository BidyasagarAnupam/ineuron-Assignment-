// 6. Write a program to print all Prime numbers under 100
#include<stdio.h>
int main() {
    int temp = 0, i, j;
    for (i = 2; i <= 100; i++) {
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