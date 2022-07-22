// 4. Write a program to calculate HCF of two numbers
#include<stdio.h>
int main() {
    int num1, num2, i, hcf;
    printf("Enter two number: ");
    scanf("%d %d", &num1, &num2);
    int min = num1 < num2 ? num1 : num2;
    for (i = min; i >=  1; i--) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
            break;
        }
    }
    printf("HCF of %d and %d is %d", num1, num2, hcf);
    return 0;
}