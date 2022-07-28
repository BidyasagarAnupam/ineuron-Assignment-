// 4. Write a recursive function to calculate sum of squares of first n natural numbers
#include<stdio.h>

//  Function Declaration
int sumOfSquareOfNaturalNum(int);

// main function
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The sum of square of %d natural number is %d", num, sumOfSquareOfNaturalNum(num));
    return 0;
}

//  Function start
int sumOfSquareOfNaturalNum(int N) {
    if (N == 1)
        return 1;
    return (N * N) + sumOfSquareOfNaturalNum(N - 1);

}