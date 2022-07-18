// 1. Write a program to find the Nth term of the Fibonnaci series.
//  1 1 2 3 5 8 13 ....
#include<stdio.h>
int main() {
    int num;
    int num1 =1, num2 = 1, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num == 1 || num == 2) {
        printf("1");
    } else {
        for(int i=3; i<= num; i++) {
            sum = num1 + num2;
            num1 = num2;
            num2 = sum;
        }
        printf("The %dth term of Fibonnaci Series is %d", num, sum);
    }
return 0;
}