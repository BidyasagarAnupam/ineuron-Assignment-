// 9. Write a C program to sort a string array in ascending order.
#include<stdio.h>

int main() {
    int n = 0;
    char str[20];

    printf("Enter your String: ");
    fgets(str, 20, stdin);

    for (n = 0; str[n]; n++);

    //  Code for Sorting the string
    for (int j = 0; j < n - 1; j++) {
        for (int i = 0; i < n - 1; i++) {
            if (str[i] < str[i + 1]) {
                continue;
            }
            else {
                // Swapping
                str[i] = str[i] + str[i + 1];
                str[i + 1] = str[i] - str[i + 1];
                str[i] = str[i] - str[i + 1];

            }
        }
    }

    printf("After Ascending order: %s", str);
    return 0;
}