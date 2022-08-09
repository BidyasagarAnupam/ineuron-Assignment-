// 3. Write a function to compare two strings.
#include<stdio.h>

//  function declaration
int strComp(char*, char*);

// main function
int main() {
    char str1[20];
    char str2[20];

    printf("Enter your first String: ");
    fgets(str1, 20, stdin);
    printf("Enter your second String: ");
    fgets(str2, 20, stdin);

    int r = strComp(str1, str2);
    if (r == -1) {
        printf("%s and %s are in Dictionary order", str1, str2);
    }
    else if (r == 1) {
        printf("%s and %s are in opposite Dictionary order", str1, str2);
    } else {
        printf("%s and %s are same", str1, str2);
    }

    return 0;
}

//  function defination
int strComp(char str1[], char str2[]) {
    int check = 0;
    for (int i = 0; str1[i]; i++) {
        if (str1[i] < str2[i]) {
            check = -1;
            return check;
        }
        else if (str1[i] > str2[i]) {
            check = 1;
            return check;
        }
        else {
            check = 0;
        }
    }
    return check;
}
