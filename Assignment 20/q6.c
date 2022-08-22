// Write a program to calculate the length of the string using a pointer
#include<stdio.h>

//  function declaration
int lengthOfString(char*);

//  main function
int main() {
    char str[20];

    printf("Enter a word:  ");
    gets(str);

    printf("Length of %s is %d", str, lengthOfString(str));
    return 0;
}

//  function defination
int lengthOfString(char *str) {
    int length;
    for(length =0; str[length]; length++);
    return length;
}