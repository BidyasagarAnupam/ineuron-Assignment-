// 3. Write a function to sort an array of any size. (TSRS)
#include<stdio.h>

// function declaration
int* sortingArray(int*, int);

// main function
int main() {
    int size;
    printf("Enter size  of Array:  ");
    scanf("%d", &size);
    int arr[size];
    int* sortArr = sortingArray(arr, size);

    printf("After sorting: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", sortArr[i]);
    }
    return 0;
}

//  function defination
int* sortingArray(int arr[], int size) {
    printf("Eneter %d number: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    //  Code for Sorting the array
    for (int j = 0; j < size - 1; j++) {
        for (int i = 0; i < size - 1; i++) {
            if (arr[i] < arr[i + 1]) {
                continue;
            }
            else {
                // Swapping
                arr[i] = arr[i] + arr[i + 1];
                arr[i + 1] = arr[i] - arr[i + 1];
                arr[i] = arr[i] - arr[i + 1];

            }
        }
    }

    return arr;
}