// 9. Write a program in C to find the square of any number using the function.
#include<stdio.h>

// function declaration
int squareFunction(int);

// main funtion
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Square of %d is %d", num, squareFunction(num));
    return 0;
}
//  function srart
int squareFunction(int num) {
    return num*num;
}
