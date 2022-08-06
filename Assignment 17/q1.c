// 1. Write a program to calculate the length of the string. (without using built-in method)
#include<stdio.h>

//  main function
int main() {
    int i;
    // initialize  the string
    // char str[20] = { 'B', 'i', 'd','y','a','s','a','g','a','r' }; OR
    char str[20];

    //  User input
    printf("Enter your name: ");
    fgets(str, 20, stdin);
    for (int i = 0; str[i]; i++) {
        // if (str[i] == '\n')
        //     break;
        printf("%c == %d ", str[i], str[i]);
    }
    //  Logic
    // for (i = 0; str[i]; i++);
    // printf("Length of %s is %d", str, i);
    return 0;
}