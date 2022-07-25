// 5. Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
void printOddNaturalNumber(int);
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printOddNaturalNumber(num);
    return 0;
}
void printOddNaturalNumber(int num) {
    for(int i=1; i<=num; i++) {
        printf("%d ", 2*i-1);
    }
}