// 5. Write a recursive function to print first N even natural numbers
#include<stdio.h>

//  Function Declaration
void printEvenNaturalNum(int);

// main function
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printEvenNaturalNum(num);
    return 0;
}

//  Function start
void printEvenNaturalNum(int N) {
    if (N > 0) {
        printEvenNaturalNum(N - 1);
        printf("%d ", 2 * N);
    }
}