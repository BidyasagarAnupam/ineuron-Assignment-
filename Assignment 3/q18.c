// Write a program which takes the month number as an input and display number of 
// days in that month
#include<stdio.h>
int main() {
    int monthDay;
    printf("Enter the month number: ");
    scanf("%d", &monthDay);
    if (monthDay == 1 || monthDay == 3 || monthDay == 5 || monthDay == 7 || monthDay == 8 || monthDay == 10 || monthDay == 12) {
        printf("Number of days is 31");
    }
    else if (monthDay == 4 || monthDay == 6 || monthDay == 9 || monthDay == 11) {
        printf("Number of days is 30");
    } else if(monthDay == 2){
        printf("Number of days is 28/29");
    } else {
        printf("Enter a valid number");
    }
    return 0;
}