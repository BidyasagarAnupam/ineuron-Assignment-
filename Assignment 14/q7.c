// 7. Write a program to find second largest in an array.Take array values from the user.
#include<stdio.h>

int main() {
    int n = 5;
    int arr[n];

    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Using Sorting the array
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
    // printf("The second largest number is %d", arr[n-2]);

//  Using another batter approach
    int largest = 0, secondLargest = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] > secondLargest && largest != arr[i]) {
            secondLargest = arr[i];
        }
    }
    printf("The second largest number is %d", secondLargest);

    return 0;
}