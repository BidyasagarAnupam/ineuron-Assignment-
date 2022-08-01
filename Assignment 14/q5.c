// 5. Write a program to find the smallest number stored in an array of size 10. Take array values from the user.
#include<stdio.h>

// main function
int main() {
    int arr[10];

    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    int minNum = arr[0];

    for (int i = 1; i < 10; i++) {
        if (minNum > arr[i])
            minNum = arr[i];
    }
    printf("The smallest number is %d", minNum);
    return 0;
}