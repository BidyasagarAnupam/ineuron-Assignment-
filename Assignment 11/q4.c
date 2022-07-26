// 4. Write a function to find the next prime number of a given number. (TSRS)
#include<stdio.h>

//  function declaration
int nextPrimeNumber(int);

//  main function
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The next prime number of %d is %d", num,nextPrimeNumber(num));
    return 0;
}

//  function to print next Prime number
int nextPrimeNumber(int number) {
    int temp = 0, i, j;

    for (i = number + 1; i >= 2; i++) {

        temp = 0;
        for (j = 2; j < i/2; j++) {
            if (!(i % j)) {
                temp++;
                break;
            }
        }
        if (!(temp == 1)) {
            return i;
            break;
        }
    }
}
