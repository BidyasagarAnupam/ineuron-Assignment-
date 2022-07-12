// Write a program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
int main() {
    char alphabet;
    printf("Enter an Alphabet: ");
    scanf("%c", &alphabet);
    //  ASCII character of A = 65, Z = 90, a = 97, z = 122
    if (alphabet >= 65 && alphabet <= 90) {
        printf("%c is Uppercase", alphabet);
    }
    else if (alphabet >= 97 && alphabet <= 122) {
        printf("%c is Lowercase", alphabet);
    }
    else {
        printf("Please enter a valid alphabet");
    }
    return 0;
}