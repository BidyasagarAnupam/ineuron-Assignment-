// 10. Write a program in C to copy the elements of one array into another array.Take array  values from the user.
#include<stdio.h>

int main() {
    int arr[5], arr1[5];
    printf("Enter 5 numbrs: ");
    for(int i=0; i<5; i++) {
        scanf("%d" , &arr[i]);
    }
    for(int i=0; i<5; i++) {
        arr1[i] = arr[i];
    }

    printf("After copy the elements: ");
    for(int i=0; i<5; i++) {
        printf("%d ", arr1[i]);
    }
    return 0;
}