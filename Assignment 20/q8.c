// Write a program to compute the sum of all elements in an array using pointers.
#include<stdio.h>

//  function declaration
int sumOfArray(int*, int);

// main function
int main() {
    int arr[5];
    int size = 5;
    printf("Enter %d numbers\n", size);
    for(int i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Sum of all numbers is %d", sumOfArray(arr, size));
    return 0;
}

int sumOfArray(int*arr, int size) {
    int sum = 0;
    for(int i=0; i<size; i++) {
        sum += *(arr+i);
    }
    return sum;
}
