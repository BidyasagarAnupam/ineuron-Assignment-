// 7. Write a recursive function to calculate HCF of two numbers
#include<stdio.h>

// Function declaration
int hcfOfTwoNumbers(int, int);

// main function
int main() {
    int num1,num2;
    printf("Enter two number: ");
    scanf("%d %d", &num1, &num2);
    printf("HCF of %d and %d is %d", num1, num2, hcfOfTwoNumbers(num1, num2));
    return 0;
}

// Function start
int hcfOfTwoNumbers(int num1, int num2) {
    int min = num1 < num2 ? num1 : num2;
    int max = num1 > num2 ? num1 : num2;
    if (max % min == 0)
        return min;
    hcfOfTwoNumbers(max % min, min);
}