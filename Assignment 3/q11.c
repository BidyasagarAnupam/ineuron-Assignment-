/*
Write a program to take marks of 5 subjects from the user. Assume marks are given
out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed.
*/
#include<stdio.h>
int main() {
    int mark;
    for(int i=1; i<=5; i++) {
        printf("Enter your mark out of 100: ");
        scanf("%d", &mark);
        if(mark >= 33) {
            printf("You are Passed\n");
        } else {
            printf("You are fail\n");
        }
    }
return 0;
}