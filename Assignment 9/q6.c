// 6. Program to check whether a year is a leap year or not. Using switch
// statement
#include<stdio.h>
int main() {
    int year, temp;
    printf("Enter a Year: ");
    scanf("%d", &year);
    temp = year % 4;
    switch (temp)
    {
    case 0:
        printf("%d is a Leap Year", year);
        break;

    default:
        printf("%d is not a Leap Year", year);
        break;
    }
    return 0;
}