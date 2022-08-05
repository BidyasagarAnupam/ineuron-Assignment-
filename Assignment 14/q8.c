// 8. Write a program to find the second smallest number in an array.Take array values from the user.
#include<stdio.h>

int main() {
    int n = 5;
    int arr[n];

    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    //  Using Sorting the array
    // for (int j = 0; j < n - 1; j++) {
    //     for (int i = 0; i < n - 1; i++) {
    //         if (arr[i] < arr[i + 1]) {
    //             continue;
    //         }
    //         else {
    //             // Swapping
    //             arr[i] = arr[i] + arr[i + 1];
    //             arr[i + 1] = arr[i] - arr[i + 1];
    //             arr[i] = arr[i] - arr[i + 1];
    //         }
    //     }
    // }
    // printf("The second smallest number is %d", arr[1]);

//  Using another batter approach
    int smallest = 999999999, secondSmallest = 999999999;
    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if( arr[i] < secondSmallest && smallest != arr[i]) {
            secondSmallest = arr[i];
        }
    }
    printf("The second smallest number is %d", secondSmallest);
    return 0;
}