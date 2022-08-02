// 8. Write a function in C to print all unique elements in an array.
#include<stdio.h>

// function declaration
void printUniqueElement(int*, int);

// main function
int main() {
    int size;
    printf("Enter the size of Array: ");
    scanf("%d", &size);
    int arr[size];
    printUniqueElement(arr, size);
    return 0;
}

//  function defination
void printUniqueElement(int arr[], int size) {
    int j, count = 0;
    printf("Enter %d numbers: ", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    printf("The unique elements are: ");
    for (int i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (i == j) {
                continue;
            }
            else {
                if (arr[j] == arr[i]) {
                    break;
                }
            }

        }
        if (j == size) {
            printf("%d ", arr[i]);
            count++;
        }
    }
    if (count == 0) {
        printf("There is no Unique Element");
    }
}
