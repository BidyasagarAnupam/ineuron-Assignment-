// 7. Write a program to find second largest in an array.Take array values from the user.
#include<stdio.h>

int main() {
    int n = 10;
    int arr[10];

    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    //  Code for Sorting the array
    for (int j = 0; j < n - 1; j++) {
        for (int i = 0; i < n - 1; i++) {
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

    printf("The second largest number is %d", arr[n-2]);

    return 0;
}