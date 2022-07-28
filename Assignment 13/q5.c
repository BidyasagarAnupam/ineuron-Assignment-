// 5. Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>

//  Function Declaration
int sumOfDigitOfANumber(int);

// main function
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The sum of digit of %d is %d", num, sumOfDigitOfANumber(num));
    return 0;
}

//  Function start
int sumOfDigitOfANumber(int N) {
    if (N > 1) {
        return (N%10) + sumOfDigitOfANumber(N/10);
    }

}