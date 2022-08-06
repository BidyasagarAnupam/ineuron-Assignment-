// 8. Write a program in C to copy one string to another string.
#include<stdio.h>

int main() {
    char str[20], tempStr[20];

    printf("Enter your string: ");
    fgets(str, 20, stdin);

    for(int i=0; i<str[i]; i++) {
        tempStr[i] = str[i];
    }
    printf("The copied string is %s", tempStr);
    return 0;
}