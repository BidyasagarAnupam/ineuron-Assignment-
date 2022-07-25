// 6. Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
int factorial(int);
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d is %d", num, factorial(num));
    return 0;
}
int factorial(int num) {
    int fact = 1;
    for(int i=1; i<=num; i++) {
        fact *= i;
    }
    return fact;
}