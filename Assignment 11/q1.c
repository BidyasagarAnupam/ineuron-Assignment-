// 1. Write a function to calculate LCM of two numbers. (TSRS)
#include<stdio.h>
int lcm(int, int);
int main() {
    int num1, num2;
    printf("Enter two number: ");
    scanf("%d %d", &num1, &num2);
    printf("LCM of %d and %d is %d", num1, num2, lcm(num1, num2));
    return 0;
}
// Function to find LCM of two number
int lcm(int num1, int num2) {
    int i;
    for (i = 1;i <= num1 * num2; i++) {
        if ((i % num1 == 0) && (i % num2 == 0)) {
            break;
        }
    }
    return i;
}