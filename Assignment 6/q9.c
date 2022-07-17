// 9. Write a program to calculate LCM of two numbers
#include<stdio.h>
int main() {
    int num1, num2, temp;
    int lcm = 1;
    printf("Enter two number: ");
    scanf("%d %d", &num1, &num2);
    if (num1 % num2 == 0) {
        printf("LCM of %d and %d is %d", num1, num2, num1);
    }
    else if (num2 % num1 == 0) {
        printf("LCM of %d and %d is %d", num1, num2, num2);
    }
    else {
        temp = num1 > num2 ? num1 : num2;
        for (int i = 2; i <= temp; i++) {
            if (num1 % i == 0 && num2 % i == 0) {
                // lcm = lcm * i;
                // num1 = num1 / i;
                // num2 = num2 / i;
                // temp = num1 > num2 ? num1 : num2;
                // TODO Doubt
            }
        }
        printf("LCM of %d and %d is %d", num1, num2, lcm);
    }
    return 0;
}