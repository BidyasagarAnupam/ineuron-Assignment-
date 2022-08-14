// Write a program to find the number of vowels in each of the 5 strings stored in two dimensional arrays, taken from the user.
#include<stdio.h>

int main() {
    char str[5][20];

    // User Input 
    printf("Enter five words: ");
    for (int i = 0; i < 5; i++)
        fgets(str[i], 20, stdin);

    for(int i=0; i<5; i++) {
        for(int j=0; str[i][j]; j++) {
            if (str[i][j] == 'a' || str[i][j] == 'e' || str[i][j] == 'i' || str[i][j] == 'o' || str[i][j] == 'u' || str[i][j] == 'A' || str[i][j] == 'E' || str[i][j] == 'I' || str[i][j] == 'O' || str[i][j] == 'U') {
                printf("%c is an Vowel in %s", str[i][j], str[i]);
            }
        }
        printf("\n");
    }
    return 0;
}