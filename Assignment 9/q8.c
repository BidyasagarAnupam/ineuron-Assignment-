// 8. Program to convert a positive number into a negative number and negative
// number into a positive number using a switch statement.
#include<stdio.h>
void greeting(int);
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    switch (num - 0 > 0)
    {
    case 1:
        num = num * -1;
        greeting(num);
        break;
    case 0:
        num = num * -1;
        greeting(num);
    default:
        break;
    }
    return 0;
}

void greeting(int num) {
    printf("After changing number is %d", num);
}