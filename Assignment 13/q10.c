// 10. Write a program in C to calculate the power of any number using recursion.
#include<stdio.h>

//  function declaration
int calculatePower(int, int);

// main function
int main() {
    int base, power;
    printf("Enter the value of base and power in \"base^power\" format: ");
    scanf("%d^%d", &base, &power);
    printf("%d^%d=%d", base, power, calculatePower(base, power));
    return 0;
}

//  function start
int product = 1;
int calculatePower(int base, int power) {
    if(power == 0)
        return 1;
    product *= base;
    calculatePower(base, power-1);
    return product;
}