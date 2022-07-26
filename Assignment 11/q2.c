// 2. Write a function to calculate HCF of two numbers. (TSRS)
#include<stdio.h>
int hcf(int, int);
int main() {
    int num1, num2;
    printf("Enter two number: ");
    scanf("%d %d", &num1, &num2);
    printf("HCF of %d and %d is %d", num1, num2, hcf(num1, num2));
    return 0;
}
// Function to find HCF of two number
int hcf(int num1, int num2) {
    int i;
    int min = num1 < num2 ? num1 : num2;
    for (i = min; i >= 1; i--) {
        if ((num1 % i == 0) && (num2 % i == 0)) {
            break;
        }
    }
    return i;
}