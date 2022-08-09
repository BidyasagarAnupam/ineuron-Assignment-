// 10. Write a function to find the repeated character in a given string.
#include<stdio.h>

// function declaration
void repeatedChar(char*);

// main function
int main() {
    char str[20];
    printf("Enter your string: ");
    fgets(str, 20, stdin);
    repeatedChar(str);

    return 0;
}

// function declaration
void repeatedChar(char str[]) {
    int size, clock = 0;
    //  for size
    for (size = 0; str[size]; size++);

    int i, j;
    for (i = 0; str[i]; i++) {
        for (j = i + 1; str[j]; j++) {
            if (str[i] == str[j] || str[i] == str[j] + 32 || str[i] == str[j] - 32) {
                printf("In %s, %c is repeated\n", str, str[i]);
                break;
            }
            else {
                continue;
            }
        }
    }
}