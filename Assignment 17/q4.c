// 4. Write a program to convert a given string into uppercase
#include<stdio.h>

int main() {
    char str[20];
    printf("Enter your String: ");
    fgets(str, 20, stdin);

    for(int i=0; str[i]; i++) {
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= 32;
        }
    }
    printf("After Convert into Uppercase : %s", str);
    return 0;
}