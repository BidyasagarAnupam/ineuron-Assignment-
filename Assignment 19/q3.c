// Write a program to read and display a 2D array of strings in C language.
#include<stdio.h>

int main() {
    char str[10][20];

    // user input
    printf("Enter 10 cities name: ");
    for (int i = 0; i < 10; i++)
        fgets(str[i], 20, stdin);
    printf("\n");
    
    for (int i = 0; i < 10; i++)
        printf("%s", str[i]);
    return 0;
}
