// Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
#include<stdio.h>

// function declration
void sortAnArray(int*, int);
void swap(int*, int*);

// main function
int main() {
    int arr[10];
    int size = 10;
    // user input
    printf("Enter %d numbers", size);
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    sortAnArray(arr, size);

    return 0;
}
void sortAnArray(int* arr, int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                swap(&arr[i], &arr[j]);
            }
            else {
                continue;
            }
        }
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

void swap(int* num1, int* num2) {
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}