// 5. Write a function to find the first occurrence of adjacent duplicate values in the array. Function has to return the value of the element.
#include<stdio.h>

//  function Declaration
int fstDuplicateValue(int*, int);

// main function
int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("The first occurrence of adjacent duplicate values in the array is %d", fstDuplicateValue(arr, size));
    return 0;
}

// function defination
int fstDuplicateValue(int arr[], int size) {
    printf("Enter %d numbers: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            return arr[i];
        }
    }
}