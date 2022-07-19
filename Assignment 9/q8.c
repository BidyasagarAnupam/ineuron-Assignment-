// 8. Program to convert a positive number into a negative number and negative
// number into a positive number using a switch statement.
#include<stdio.h>
int main() {
    int num, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0) {
        temp = 1;
    }
    else {
        temp = 0;
    }
    switch (temp)
    {
    case 0:
        num = num * (-1);
        break;
    case 1:
        num = num * (-1);
        break;

    default:
        printf("Somting went wrong...");
        break;
    }
    printf("%d", num);
    return 0;
}