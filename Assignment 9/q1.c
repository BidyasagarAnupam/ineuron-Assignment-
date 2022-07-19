// 1. Write a program which takes the month number as an input and display
// number of days in that month.
#include<stdio.h>
int main() {
    int num;
    printf("Enter a month number: ");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("Number of day is 31");
        break;
    case 2:
        printf("Number of day is 28/29");
        break;
    case 3:
        printf("Number of day is 31");
        break;
    case 4:
        printf("Number of day is 30");
        break;
    case 5:
        printf("Number of day is 31");
        break;
    case 6:
        printf("Number of day is 30");
        break;
    case 7:
        printf("Number of day is 31");
        break;
    case 8:
        printf("Number of day is 31");
        break;
    case 9:
        printf("Number of day is 30");
        break;
    case 10:
        printf("Number of day is 31");
        break;
    case 11:
        printf("Number of day is 30");
        break;
    case 12:
        printf("Number of day is 31");
        break;
    
    default:
        printf("Enter a valid number");
        break;
    }
    return 0;
}