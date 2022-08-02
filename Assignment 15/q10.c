// 10. Write a function in C to count the frequency of each element of an array.
#include<stdio.h>

// function defination
void frequency(int*, int);

// main function
int main() {
    int size;
    printf("Enter the size of the Array: ");
    scanf("%d", &size);
    int arr[size];
    frequency(arr, size);
    return 0;
}


// function defination
void frequency(int arr[], int size) {
    int frequency;
    printf("Enter %d numbers: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Logic for check frequency
    for (int i = 0; i < size; i++) {
        frequency = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                frequency++;
            }
        }
        printf("The frequency of %d is %d\n", arr[i], frequency);
    }

}