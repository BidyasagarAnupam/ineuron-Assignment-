// Write a function to check whether a given string is an alphanumeric string or not. (Alphanumeric string must contain at least one alphabet and one digit)
#include<stdio.h>

//  function declaration
void checkAlphaNumeric(char*);

// main function
int main() {
    char str[20];

    printf("Enter your String: ");
    fgets(str, 20, stdin);
    checkAlphaNumeric(str);
    return 0;
}

// function defination
void checkAlphaNumeric(char str[]) {
    int checkApla = 0, checkNumeric = 0;
    for (int i = 0; str[i]; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            checkApla++;
        else if ((str[i] >= '0' && str[i] <= '9'))
            checkNumeric++;
        if (checkApla > 0 && checkNumeric > 0) {
            break;;
        }
    }
    if (checkApla > 0 && checkNumeric > 0)
        printf("%s is an AlphaNumeric String");
    else
        printf("%s is not an AlphaNumeric String");

}