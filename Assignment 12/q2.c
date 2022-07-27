// 2. Write a recursive function to print first N natural numbers in reverse order
#include<stdio.h>

//  Function Declaration
void printNNaturalNumInReverse(int);

// main function
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printNNaturalNumInReverse(num);
    return 0;
}

//  Function start
void printNNaturalNumInReverse(int N) {
    if (N > 0) {
        printf("%d ", N);
        printNNaturalNumInReverse(N - 1);
    }
}