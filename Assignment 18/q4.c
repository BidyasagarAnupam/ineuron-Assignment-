//4.  Write a function to transform string into uppercase
#include<stdio.h>

// function declaration
void intoUpperCase(char*);

//  main function
int main() {
    char str[20];

    printf("Enter your String: ");
    fgets(str, 20, stdin);
    printf("After convert into Uppercase: ");
    intoUpperCase(str);
    return 0;
}

//  function defination
void intoUpperCase(char str[]) {
    char strUpper[20];
    // logic
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            strUpper[i] = str[i] - 32;
        else
            strUpper[i] = str[i];
    }
    // for print
    printf("%s", strUpper);
}
