/*
4. Write a function to rotate an array by n position in d direction. The d is an indicative value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
*/
#include<stdio.h>

// function declaration
int* rotateArrayInRightDir(int*, int, int);
int* rotateArrayInLeftDir(int*, int, int);

// main function
int main() {
    int size, position, direction;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("********************************************************\n");
    printf("Enter the number how much time you wants to rotate the array: ");
    scanf("%d", &position);
    printf("********************************************************\n");
    printf("Enter 0 for rotate the array in right direction\n");
    printf("Enter  1 for rotate the array in left direction\n");
    scanf("%d", &direction);
    int arr[size];

    int* rotateArr;
    if (direction) {
        rotateArr = rotateArrayInLeftDir(arr, size, position);
        printf("After %d roration in left Direction\n", position);

    }
    else {
        rotateArr = rotateArrayInRightDir(arr, size, position);
        printf("After %d roration in right Direction\n", position);

    }

    for (int i = 0; i < size; i++) {
        printf("%d ", rotateArr[i]);
    }
    return 0;
}

// Function Defination for right direction
int* rotateArrayInRightDir(int arr[], int size, int position) {
    int temp;
    printf("Enter %d numbers: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for (int j = 1; j <= position; j++) {
        temp = arr[0];
        for (int i = size - 1; i >= 0; i--) {
            if (i == size - 1) // jab i ka value arr ke last main hoga tab 1st element main last value assign ho jayega
                arr[0] = arr[i];
            else if (i != 0 && i != size - 1)
                arr[i + 1] = arr[i];
            else // jab i ka value 0 ho jayega to 0+1=1 index main temp ka value assign ho jayega
                arr[i + 1] = temp;
        }
    }

    return arr;
}

//  Function Defination for left direction
int* rotateArrayInLeftDir(int arr[], int size, int position) {
    int temp;
    printf("Enter %d numbers: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for (int j = 1; j <= position; j++) {
        temp = arr[size - 1];
        for (int i = 0; i < size; i++) {
            if (i == 0)
                arr[size - 1] = arr[i];
            else if (i != 0 && i != (size - 1))
                arr[i - 1] = arr[i];
            else
                arr[i - 1] = temp;
        }

    }

    return arr;
}
