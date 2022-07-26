// 3. Write a function to check whether a given number is Prime or not. (TSRS)
#include<stdio.h>

// function declaration
int checkPrime(int);

// main function
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (checkPrime(num)) {
        printf("%d is a prime number", num);
    } else {
        printf("%d is not a prime number", num);
    }
        return 0;
}

// Fuction for prime number
int checkPrime(int number) {
    int flag = 0;
    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            flag++;
            break;
        }
    }
    if (flag == 1) {
        return 0;
    }
    else {
        return 1;
    }
}