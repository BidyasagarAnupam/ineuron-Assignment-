// 4. Write a program to print the first N odd natural numbers
#include<stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i=1; i<=num; i++) {
        printf("%d ", i*2-1);
    }
return 0;
}