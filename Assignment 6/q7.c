// 7. Write a program to count digits in a given number
#include<stdio.h>
int main() {
    int num, temp=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0) {
        temp++;
        num = num/10;
    }
    printf("%d", temp);
return 0;
}