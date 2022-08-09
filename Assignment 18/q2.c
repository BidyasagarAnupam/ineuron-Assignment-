//  2 Write a function to reverse a string.
#include<stdio.h>

// function declaration
void reverseStr(char*);

// main function
int main() {
    char str[20];
    reverseStr(str);
    return 0;
}

// function defination
void reverseStr(char str[]) {
    int i, clock = 0;
    char reverseStr[20];
    printf("Enter your String: ");
    fgets(str, 20, stdin);

    // for counting the letters
    for (i = 0; str[i]; i++);

    // logic
    for (int j = i - 1; j >= 0; j--) {
        reverseStr[clock] = str[j];
        clock++;
    }
    printf("After reverse the string %s", reverseStr);
}