// 9. Write a recursive function to print octal of a given decimal number
#include<stdio.h>

// Function Declaration
void octalOfANumber(int);

// main function
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    octalOfANumber(num);
    return 0;
}

// Function Start
void octalOfANumber(int num) {
    if (num == 1)
        printf("1");
    else {
        octalOfANumber(num / 8);
        printf("%d", num % 8);
    }
}