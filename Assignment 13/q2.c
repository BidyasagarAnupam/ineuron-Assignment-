// 2. Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>

//  Function Declaration
int sumOfOddNaturalNum(int);

// main function
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The sum of %d odd number is %d", num, sumOfOddNaturalNum(num));
    return 0;
}

//  Function start
int sumOfOddNaturalNum(int N) {
    if (N == 1)
        return 1;
    return (2 * N - 1) + sumOfOddNaturalNum(N - 1);

}