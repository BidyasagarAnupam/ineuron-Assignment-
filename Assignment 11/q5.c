// 5. Write a function to print first N prime numbers (TSRN)
#include<stdio.h>

// function declaration 
void printFirstNPrimeNumber(int);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printFirstNPrimeNumber(num);
    return 0;
}

void printFirstNPrimeNumber(int number)
{
    int temp = 0, i = 2, j;
    while (number >= 1) {
        temp = 0;
        for (j = 2; j < i; j++) {
            if (!(i % j)) {
                temp++;
                break;
            }
        }
        if (!(temp == 1)) {
            printf("%d ", i);
            number--;
        }
        i++;
    }
}
