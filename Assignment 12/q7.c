// 7. Write a recursive function to print squares of first N natural numbers
#include<stdio.h>

//  Function Declaration
void printSquareofNaturalNum(int);

// main function
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printSquareofNaturalNum(num);
    return 0;
}

//  Function start
void printSquareofNaturalNum(int N) {
    if (N > 0) {
        printSquareofNaturalNum(N - 1);
        printf("%d ", N * N);
    }
}