// Write a program to print the strings which are palindrome in the list of strings.
#include<stdio.h>

//  function declaration
int checkPalindrome(char*);

//  main function
int main() {
    char str[10][20];
    printf("Enter 10 words: ");
    for (int i = 0; i < 10; i++) {
        fgets(str[i], 20, stdin);
    }

    for(int i=0; i<10; i++) {
        if(checkPalindrome(str[i])) {
            printf("%s is a palindrome\n", str[i]);
        }
    }
    return 0;
}

int checkPalindrome(char str[]) {
    int check = 1;
    //  find size of string
    int size;
    for (size = 0; str[size] != '\n'; size++);

    //  logic
    for (int i = 0; i <= size / 2; i++) {
        if (str[i] == str[(size - 1) - i]) {
            continue;;
        }
        else {
            check = 0;
            break;
        }
    }
    return check;
}