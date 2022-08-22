// Write a program to print a string in reverse using a pointer
#include<stdio.h>
#include<string.h>

// function declaration
void reverseString(char*);

// main function
int main() {
    char str[20];
    printf("Enter a word: ");
    fgets(str, 20, stdin);
    str[strlen(str)-1] = '\0';
    reverseString(str);

    return 0;
}

//  function defination
void reverseString(char*str) {
    int length = strlen(str);
    for(int i=length-1; i>=0; i--) {
        printf("%c", *(str+i));
    }
}