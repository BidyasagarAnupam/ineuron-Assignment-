// 3. Write a recursive function to print first N odd natural numbers
#include<stdio.h>

//  Function Declaration
void printOddNaturalNum(int);

// main function
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printOddNaturalNum(num);
    return 0;
}

//  Function start
void printOddNaturalNum(int N) {
    if (N > 0) {
        printOddNaturalNum(N-1);
        printf("%d ", 2*N-1);
    }
}