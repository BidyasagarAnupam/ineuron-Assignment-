// Write a program to find the maximum number between two numbers using a pointer
#include<stdio.h>

//  function declaration
void maximumNum(int*, int*);

// main functiob
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d" ,&num1, &num2);
    maximumNum(&num1, &num2);
    return 0;
}

//  function defination
void maximumNum(int *num1, int *num2) {
    if(*num1 > *num2)  {
        printf("%d is maximum", *num1);
    } else {
        printf("%d is maximum", *num2);
    }
}
