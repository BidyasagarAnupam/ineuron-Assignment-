// 9. Write a function in C to merge two arrays of the same size sorted in descending order.
#include<stdio.h>

// function declaration
int* mergeTwoSoteredArray(int*, int*, int*, int);
int* sortingArray(int*, int);



// main function
int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr1[size], arr2[size], arr3[2 * size];
    int* mergerdArray;

    mergerdArray = mergeTwoSoteredArray(arr1, arr2, arr3, size);
    for (int i = 0; i < 2 * size; i++) {
        printf("%d ", mergerdArray[i]);
    }
    return 0;
}

//  function defination of  sorting Array
int* sortingArray(int arr[], int size) {
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


// function defination of Merging array
int* mergeTwoSoteredArray(int arr1[], int arr2[], int  margedArray[], int size) {

    printf("Eneter %d numbers: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter %d numbers again: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr2[i]);
    }

    // sorting the arraies
    arr1 = sortingArray(arr1, size);
    arr2 = sortingArray(arr2, size);

    // Merging Two Arraies
    int count = 0;
    for (int i = 0; i < 2 * size; i++) {
        if (i < size) {
            margedArray[i] = arr1[i];
        }
        else {
            margedArray[i] = arr2[count];
            count++;
        }
    }

    return margedArray;
}