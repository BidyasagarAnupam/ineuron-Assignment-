/*
Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
convert it into USD.
*/
#include<stdio.h>
int main() {
    int inr;
    printf("Enter the price in INR: ");
    scanf("%d", &inr);

    printf("Rs %d = $%.3f", inr, (inr/76.23));
    return 0;
}