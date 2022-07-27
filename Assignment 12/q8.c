// 8. Write a recursive function to print binary of a given decimal number
#include<stdio.h>

// Function Declaration
void binaryOfANumber(int);

// main function
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    binaryOfANumber(num);
    return 0;
}

// Function Start
void binaryOfANumber(int num) {
    if(num == 1)
        printf("1");
    else {
        binaryOfANumber(num/2);
        printf("%d", num%2);
    }
}