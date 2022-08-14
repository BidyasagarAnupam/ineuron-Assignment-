// Suppose we have a list of email addresses, check whether all email addresses have ‘@’ in it. Print the odd email out.
#include<stdio.h>

int main() {
    int clock, check = 0;
    char str[10][100] = { "bidyasagar@gmail.com", "anupam@gmail.com", "satya@gmail.com", "snigdha@gmail.com", "arti@gmail.com", "gouri@gmail.com", "subham@gmail.com", "rajeeb@gmail.com", "dibyojyoti@gmail.com", "narayan@gmail.com" };

    // logic to check @
    for (int i = 0; i < 10; i++) {
        clock = 0;
        for (int j = 0; str[i][j] != '\0'; j++) {
            // printf("i %d => j %d => %c\n", i, j, str[i][j]);
            if (str[i][j] == '@') {
                // printf("In %s @ mila\n", str[i]);
                clock = 0;
                break;
            }
            else {
                clock = 1;
            }
        }
        if (clock) {
            printf("%s is not a valid email\n", str[i]);
            check = 1;
        }
    }
    if (check == 0)
        printf("All emails are valid");
    return 0;
}