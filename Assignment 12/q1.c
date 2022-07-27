//  1. Write a recursive function to print first N natural numbers
#include<stdio.h>

//  Function Declaration
void printNNaturalNum(int);

// main function
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printNNaturalNum(num); 
    return 0;
}

//  Function start
void printNNaturalNum(int N) {
    if(N > 0) {
        printNNaturalNum(N -1);
        printf("%d ", N);
    }
}