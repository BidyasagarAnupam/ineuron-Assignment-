// 2. Write a program to count the occurrence of a given character in a given string.
#include<stdio.h>

int main() {

    char str[10], anyChar;
    int count = 0;
    printf("Enter your String: ");
    fgets(str, 10, stdin);
    printf("Enter a character, for which you want the occurence : ");
    scanf("%c", &anyChar);



    for (int i = 0; str[i]; i++) {
        if (str[i] == anyChar)
            count++;
    }
    if (count) {
        printf("The occurence of %c in %s is %d", anyChar, str, count);
    }
    else {
        printf("");
    }

    return 0;
}