// 9. Write a program to calculate LCM of two numbers
#include<stdio.h>
int main() {
    int num1, num2, i;
    printf("Enter two number: ");
    scanf("%d %d", &num1, &num2);
    if (num1 % num2 == 0) {
        printf("LCM of %d and %d is %d", num1, num2, num1);
    }
    else if (num2 % num1 == 0) {
        printf("LCM of %d and %d is %d", num1, num2, num2);
    }  else {
        for(i = 1; i<= num1*num2; i++) {
            if(i%num1==0 && i%num2==0) {
                break;
            }
        }
        printf("LCM of %d and %d is %d", num1, num2, i);
    }
    return 0;
}