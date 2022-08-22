// Write a function to swap values of two in variables of calling function. (TSRS)
#include<stdio.h>

// function declaration
void swap(int*, int*);

// main function
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    swap(&num1, &num2);
    printf("After swapping num1 = %d and num2 = %d", num1, num2);
    return 0;
}

//  function defination
void swap(int*num1, int*num2) {
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}