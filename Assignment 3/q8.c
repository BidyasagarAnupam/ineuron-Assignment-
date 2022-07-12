// Write a program to check whether a given year is a leap year or not.
#include <stdio.h>
int main()
{
    int year;
    printf("Enter the Year: ");
    scanf("%d", &year);
    if(year % 4 ==0) {
        printf("%d is Leap year", year);
    } else {
        printf("%d is not a Leap year", year);
    }
    return 0;
}