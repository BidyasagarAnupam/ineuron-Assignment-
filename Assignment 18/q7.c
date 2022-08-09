// Write a function to check whether a given string is palindrome or not.
#include<stdio.h>

// function declaration
void palindrome(char*);
//  or
void palindrome2ndMethod(char*);


// main function
int main() {
    char str[20];
    printf("Enter your String: ");
    fgets(str, 20, stdin);

    // palindrome(str);
    palindrome2ndMethod(str);
    return 0;
}

// function defination using another string
void palindrome(char str[]) {
    char tempStr[20];
    int clock = 0, size;

    //  legthn of str
    for (size = 0; str[size]; size++);

    // store the string as reverse in tempStr
    for (int j = size - 2; j >= 0; j--) {
        tempStr[clock] = str[j];
        clock++;
    }

    // check for both string 
    int k;
    for (k = 0; str[k]; k++) {
        if (str[k] == tempStr[k])
            continue;
        else
            break;
    }
    if (k == size - 1)
        printf("%s is a palindrome", str);
    else
        printf("%s is not a palindrome", str);
}

//  2nd function defination without using any another string
void palindrome2ndMethod(char str[]) {
    int size, clock = 0;

    // to get size of string
    for (size = 0; str[size]; size++);

    // main logic
    for (int i = 0; i <= (size - 2) / 2; i++) {
        if (str[i] == str[(size - 2) - i])
            continue;
        else {
            clock++;
            break;
        }
    }
    if (clock)
        printf("%s is not a palindrome");
    else
        printf("%s is a palindrome");

}
