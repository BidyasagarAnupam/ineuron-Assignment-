/*
2. Write a menu driven program with the following options:
    a. Addition
    b. Subtraction
    c. Multiplication
    d. Division
    e. Exit
*/
#include<stdio.h>
#include<stdlib.h>
int main() {
    int num1, num2;
    char a;
    printf("Enter any one\n");
    printf("a. Addition\n");
    printf("b. Subtraction\n");
    printf("c. Multiplication\n");
    printf("d. Division\n");
    printf("e. Exit\n\n");
    scanf("%c", &a);

    switch (a) {
    case 'a':
        printf("Enter two numbers ");
        scanf("%d %d", &num1, &num2);
        printf("Sum is %d", num1 + num2);
        break;
    case 'b':
        printf("Enter two numbers ");
        scanf("%d %d", &num1, &num2);
        printf("Difference is %d", num1 - num2);
        break;
    case 'c':
        printf("Enter two numbers ");
        scanf("%d %d", &num1, &num2);
        printf("Product is %d", num1 * num2);
        break;
    case 'd':
        printf("Enter two numbers ");
        scanf("%d %d", &num1, &num2);
        printf("Quotient is %d", num1 / num2);
        break;
    case 'e':
        exit(0);
        break;

    default:
        printf("Enter a valid choice...");
        break;
    }


    return 0;
}