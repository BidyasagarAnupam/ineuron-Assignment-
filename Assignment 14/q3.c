/*
3. Write a program to calculate the sum of all even numbers and sum of all odd numbers which are stored in an array of size 10. Take array values from the user.
*/
#include<stdio.h>

//  main function
int main() {
    int arr[10];
    int sumOfEven = 0, sumofOdd = 0;

    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<10; i++) {
        if(arr[i] % 2 == 0)
            sumOfEven += arr[i];
        else
            sumofOdd += arr[i];
    }
    printf("Sum of Even number is %d\n", sumOfEven);
    printf("Sum of Odd number is %d", sumofOdd);

    return 0;
}