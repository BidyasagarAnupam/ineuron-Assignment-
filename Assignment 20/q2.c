// Write a function to swap strings of two char arrays of calling functions. (TSRS)
#include<stdio.h>
#include<string.h>

//  function declaration
void swapString(char*, char*);

// main function
int main() {

    char str1[20], str2[20];
    printf("Enter first words: \n");
    fgets(str1, 20, stdin);
    str1[strlen(str1) - 1] = '\0';

    printf("Enter second words: \n");
    fgets(str2, 20, stdin);
    str2[strlen(str2) - 1] = '\0';

    swapString(str1, str2);

    return 0;
}

// function defination
void swapString(char *str1, char *str2) {
    char temp[20];
    
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
    printf("After swapping str1 = %s and str2 = %s", str1, str2);
}