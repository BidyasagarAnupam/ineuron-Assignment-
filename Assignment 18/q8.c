// Write a function to count words in a given string
#include<stdio.h>

// function declaration
int wordCount(char*);

// main function
int main() {
    char str[20];
    printf("Enter any Sentence: \n");
    fgets(str, 20, stdin);

    printf("The number of words in %s is %d", str, wordCount(str)+1);
    return 0;
}

// function defination
int wordCount(char str[]) {
    int count = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] == ' ')
            count++;
    }
    return count;
}
