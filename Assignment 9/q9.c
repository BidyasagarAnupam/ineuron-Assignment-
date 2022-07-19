// 9. Program to Convert even number into its upper nearest odd number
// Switch Statement.
#include<stdio.h>
int main() {
    int num, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num%2;
    switch (temp)
    {
    case 0:
        num = num+1;
        printf("%d", num);
        break;
    
    default:
        printf("Its an Odd number already");
        break;
    }
    return 0;
}