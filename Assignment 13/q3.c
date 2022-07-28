// 3. Write a recursive function to calculate sum of first N even natural numbers
#include<stdio.h>

//  Function Declaration
int sumOfEvenNaturalNum(int);

// main function
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The sum of %d even number is %d", num, sumOfEvenNaturalNum(num));
    return 0;
}

//  Function start
int sumOfEvenNaturalNum(int N) {
    if (N > 0)
        return (2 * N) + sumOfEvenNaturalNum(N - 1);

}