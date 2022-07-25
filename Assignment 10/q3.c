// Write a function to check whether a given number is even or odd. Return 1 if the number is even,
//  otherwise return 0. (TSRS)
#include<stdio.h>
int evenOdd(int);
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (evenOdd(num)) {
        printf("%d is an even number", num);
    }
    else {
        printf("%d is an odd number", num);
    }
    return 0;
}
int evenOdd(int num) {
    if (num & 1 == 1)
        return 0;
    else
        return 1;
}