// 6. Write a function to print all Prime numbers between two given numbers. (TSRN)
#include<stdio.h>

//  Function declaration
void printPrimeNumbersBetTwoGivenNum(int, int);

// main function
int main() {
    int num1,num2;
    printf("Enter two number: ");
    scanf("%d %d", &num1, &num2);
    printPrimeNumbersBetTwoGivenNum(num1,num2);
    return 0;
}

//  function creation
void printPrimeNumbersBetTwoGivenNum(int num1, int num2) {
    int flag = 0, i, j;
    for (i = num1 + 1; i < num2; i++) {
        flag = 0;
        for (j = 2; j < i; j++) {
            if (!(i % j)) {
                flag++;
                break;
            }
        }
        if (!(flag == 1)) {
            printf("%d ", i);
        }
    }
}