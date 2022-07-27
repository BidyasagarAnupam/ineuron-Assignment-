// 6. Write a recursive function to print first N even natural numbers in reverse order
#include<stdio.h>

//  Function Declaration
void printEvenNaturalNumInReverse(int);

// main function
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printEvenNaturalNumInReverse(num);
    return 0;
}

//  Function start
void printEvenNaturalNumInReverse(int N) {
    if (N > 0) {
        printf("%d ", 2 * N);
        printEvenNaturalNumInReverse(N - 1);
    }
}