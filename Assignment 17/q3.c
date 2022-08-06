// 3. Write a program to count vowels in a given string
#include<stdio.h>

int main() {
    char str[20];
    int count = 0;
    printf("Enter your String: ");
    fgets(str, 20, stdin);

    for (int i = 0; str[i]; i++) {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            count++;
        }
    }
    (count) ? printf("In %s, there are %d vowels are present", str, count) : printf("In %s, there are %d vowels are present", str, count);
        return 0;
}