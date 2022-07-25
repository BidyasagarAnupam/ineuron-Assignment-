// 9. Write a function to check whether a given number contains a given digit or not. (TSRS)
#include<stdio.h>
int numberChek(int, int);
int main() {
    int num, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter a digit: ");
    scanf("%d", &digit);

    if(numberChek(num, digit)) {
        printf("%d contains the digit %d", num, digit);
    } else {
        printf("%d does not contains the digit %d", num, digit);
    }
    return 0;
}
//  The function to check the digit present or not
int numberChek(int number, int digit) {
    int flag = 0, rem;
    while (number != 0) {
        rem = number % 10;
        if (digit == rem) {
            flag++;
            break;
        }
        number = number / 10;
    }
    return flag;
}