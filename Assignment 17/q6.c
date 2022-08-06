// 6. Write a program to reverse a string.
#include<stdio.h>

int main() {
    char str[20], reverseStr[20];
    int i;

    printf("Enter your String: ");
    fgets(str, 20, stdin);

// for counting the letters
    for(i=0; str[i]; i++);
    
    // Logic
    int clock=0;
    for(int j=i-1; j>=0; j--) {
        reverseStr[clock] = str[j];
        clock++;
    }
    printf("After reverse: %s", reverseStr);
    return 0;
}