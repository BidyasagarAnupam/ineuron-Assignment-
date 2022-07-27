// 10. Write a recursive function to print reverse of a given number
#include<stdio.h>

// Function Declaration
void reverseOfANumber(int);

// main function
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    reverseOfANumber(num);
    return 0;
}

// Function Start
void reverseOfANumber(int num) {
    if (num > 0) {
        printf("%d", num % 10);
        reverseOfANumber(num / 10);
    }

}