// 9. Write a program in C to read n number of values in an array and display it in reverse order.Take array values from the user.
#include<stdio.h>

int main() {
    int n;
    printf("Print a number: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = n-1; i>=0; i--) {
        printf("%d ", arr[i]);
    }
}