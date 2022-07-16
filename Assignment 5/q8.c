// 8. Write a program to print squares of the first N natural numbers
#include<stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i=1;i<=num;i++) {
        printf("Square of %d is %d\n", i, i*i);
    }
return 0;
}