// Write a program to print the elements of an array in reverse order.
#include<stdio.h>

// function declaration
void reverseArray(int *, int);

// main function
int main() {
    int arr[5],size = 5 ;
    printf("Enter %d numbers\n", size);
    for(int i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }
    reverseArray(arr, size);
    return 0;
}

void reverseArray(int *arr, int size) {
    for(int i=size-1; i>=0; i--) {
        printf("%d ", *(arr+i));
    }
}