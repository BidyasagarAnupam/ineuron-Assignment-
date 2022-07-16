// 5. Write a program to print the first N odd natural numbers in reverse order.
#include<stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i=num;i>=1;i--) {
        printf("%d ", i*2-1);
    }
return 0;
}