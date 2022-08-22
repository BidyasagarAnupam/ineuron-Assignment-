// Write a program to count the number of vowels and consonants in a string using a pointer.
#include<stdio.h>
#include<string.h>

// function declaration
void countVowelsConsonant(char*);

// main function
int main() {
    char str[20];
    printf("Enter a word: ");
    fgets(str, 20, stdin);
    str[strlen(str) - 1] = '\0';
    countVowelsConsonant(str);

    return 0;
}

void countVowelsConsonant(char* str) {
    int vowelCount = 0, consonantCount = 0;
    for (int i = 0; str[i];i++) {
        if (*(str + i) == 'a' || *(str + i) == 'e' || *(str + i) == 'i' || *(str + i) == 'o' || *(str + i) == 'u' || *(str + i) == 'A' || *(str + i) == 'E' || *(str + i) == 'I' || *(str + i) == 'O' || *(str + i) == 'U') {
            vowelCount++;
        } else {
            consonantCount++;
        }
    }
    printf("In %s, %d are vowels and %d are consonants", str, vowelCount, consonantCount);
}
