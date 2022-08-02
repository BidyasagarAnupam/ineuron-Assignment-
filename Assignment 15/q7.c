// 7. Write a function in C to count a total number of duplicate elements in an array.
#include<stdio.h>

// Function Declaration
int countDuplicateInArray(int*, int);

// main function
int main() {
    int size;
    printf("Enter the size of Array: ");
    scanf("%d", &size);

    int arr[size];
    printf("The total number of duplicate elements in the given array is %d", countDuplicateInArray(arr, size));
    return 0;
}

// function defination
int countDuplicateInArray(int arr[], int size) {
    int count = 0;
    printf("Enter %d numbers: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    //  logic for count duplicate elements
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[j] == arr[i]) {
                count++;
                break;
            }
        }
    }
    return count;
}