// Write a function to transform a string into lowercase
#include<stdio.h>

// function declaration
void intoLowerCase(char*);

//  main function
int main() {
    char str[20];

    printf("Enter your String: ");
    fgets(str, 20, stdin);
    printf("After convert into Lowercase: ");
    intoLowerCase(str);
    return 0;
}

//  function defination
void intoLowerCase(char str[]) {
    char strLower[20];
    // logic
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            strLower[i] = str[i] + 32;
        else
            strLower[i] = str[i];
    }
    // for print
    printf("%s", strLower);
}
