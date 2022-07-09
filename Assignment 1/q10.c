/*
WAP to take date as an input in below given format and convert the date format and
display the result as given below.
User Input date format – “DD/MM/YYYY”  (27/11/2022)
Output format –
“Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022)
*/

#include<stdio.h>
int main() {
    int  d,m,y;
    printf("Enter the date in the format of \"DD/MM/YYYY\": ");
    scanf("%d/%d/%d", &d, &m, &y);
    printf("Day-%d, Month-%d, Year-%d", d,m,y);
    return 0;
}