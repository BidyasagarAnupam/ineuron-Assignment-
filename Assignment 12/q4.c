// 4. Write a recursive function to print first N odd natural numbers in reverse order
#include<stdio.h>

//  Function Declaration
void printOddNaturalNumInReverse(int);

// main function
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printOddNaturalNumInReverse(num);
    return 0;
}

//  Function start
void printOddNaturalNumInReverse(int N) {
    if (N > 0) {
        printf("%d ", 2 * N - 1);
        printOddNaturalNumInReverse(N - 1);
    }
}