// 7. Write a program in C to count the total number of alphabets, digits and special characters in a string.
#include<stdio.h>

int main() {
    char str[20];
    int alphaCount = 0, digitCount = 0, specialCount = 0;

    printf("Enter your  String: ");
    fgets(str, 20, stdin);

    for (int i = 0; str[i]; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            alphaCount++;
        else if (str[i] >= '0' && str[i] <= '9')
            digitCount++;
        else
            specialCount++;
    }
    printf("In %s%d digits\n%d alphabet\n%d special character", str, digitCount, alphaCount, specialCount - 1);

    return 0;
}