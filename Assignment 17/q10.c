// 10. Write a program in C to Find the Frequency of Characters.
#include<stdio.h>

int main() {
    char str[20];
    int count = 0;

    printf("Enter our String: ");
    fgets(str, 20, stdin);

    for (int i = 0; str[i]; i++) {
        count = 0;
        for (int j = 0; str[j]; j++) {
            if (str[j] != '\n' && (str[i] == str[j] || str[i] == str[j] + 32  || str[i] == str[j] - 32)) {
                count++;
            }
        }
        if (str[i] == '\n')
            break;
        printf("Frequency of %c in %s is %d\n", str[i], str, count);
    }
    return 0;
}