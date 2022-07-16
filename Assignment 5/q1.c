// 1. Write a program to print MySirG N times on the screen
#include<stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i=1; i<=num; i++) {
        printf("MySirG\n");
    }
return 0;
}