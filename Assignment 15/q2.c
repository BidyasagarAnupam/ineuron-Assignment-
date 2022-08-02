// 2. Write a function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h>

//  Function Declaration
int minNumInArray(int*, int);

// main function
int main() {
    int num;
    printf("Enter a num: ");
    scanf("%d", &num);
    int arr[num];
    printf("The min number is %d", minNumInArray(arr, num));
    return 0;
}

//  Function Defination
int minNumInArray(int arr[], int size) {
    int minNum;
    printf("Enter %d numbers: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    minNum = arr[0];
    for (int i = 1; i < size; i++) {
        if (minNum > arr[i])
            minNum = arr[i];
    }
    return minNum;
}
