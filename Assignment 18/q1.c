// 1 Write a function to calculate length of the string
#include<stdio.h>

// function declaration
int lenOfStr(char*);

// main function
int main() {
    char str[20];
    printf("The size of %s is %d", str, lenOfStr(str));
    return 0;
}

// function defination
int lenOfStr(char str[]) {
    int i;
    printf("Enter your String: ");
    fgets(str, 20, stdin);

    for(i=0; str[i]; i++);
    return i-1;
}