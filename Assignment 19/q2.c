// Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.
#include<stdio.h>
#include<string.h>

int main() {
    char str[10][20], temp[20];

    // user input
    printf("Enter 3 cities name: ");
    for (int i = 0; i < 3; i++)
        gets(str[i]);

    //  logic for sort
    for(int i=0; i<2; i++) {
        for(int j = i+1; j<3; j++) {
            if(strcmp(str[i], str[j]) > 0 ) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
        printf("%s \n", str[i]);
    return 0;
}