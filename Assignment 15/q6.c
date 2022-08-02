// 6. Write a function in C to read n number of values in an array and display it in reverse order.
#include<stdio.h>

// function declaration
void reverseArray(int*, int);

//  main function
int main() {
    int size;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    int arr[size];
    reverseArray(arr, size);
    return 0;
}

// function defination
void reverseArray(int arr[], int size) {
    printf("Enter %d numbers: ",size);
    for(int i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i=size-1; i>=0; i--){
        printf("%d ", arr[i]);
    }
}