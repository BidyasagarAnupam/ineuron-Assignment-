/*
Write a program to check whether a given character is an alphabet (uppercase), an
alphabet (lower case), a digit or a special character.
*/
#include<stdio.h>
int main() {
    char something;
    printf("Enter an  Anything: ");
    scanf("%c", &something);
    /*
        ASCII Character
        0 = 48, 9 = 57
        A = 65, Z = 90
        a = 97, z = 122
    */
    if (something >= 48 && something <= 57) {
        printf("%c is a Digit", something);
    }
    else if (something >= 65 && something <= 90) {
        printf("%c is an Upper case Alphabet", something);
    }
    else if (something >= 97 && something <= 122) {
        printf("%c is a Lower case Alphabet", something);
    } else {
        printf("%c is a Special Character", something);

    }
    return 0;
}