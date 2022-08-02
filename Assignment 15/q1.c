// 1. Write a function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>

//  Function Declaration
int maxNumInArray(int arr[], int);

// main function
int main() {
    int num;
    printf("Enter a num: ");
    scanf("%d", &num);
    int arr[num];
    printf("The max number is %d", maxNumInArray(arr, num));
    return 0;
}

//  Function Defination
int maxNumInArray(int arr[], int size) {
    int maxNum;
    printf("Enter %d numbers: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    maxNum = arr[0];
    for (int i = 1; i < size; i++) {
        if (maxNum < arr[i])
            maxNum = arr[i];
    }
    return maxNum;
}
