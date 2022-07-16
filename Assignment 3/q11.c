/*
Write a program to take marks of 5 subjects from the user. Assume marks are given
out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed.
*/
#include<stdio.h>
int main() {
    int sub1, sub2, sub3, sub4, sub5;;
    printf("Enter your 5 subject marks out of 100: ");
    scanf("%d%d%d%d%d", &sub1, &sub2, &sub3, &sub4, &sub5);
    if (sub1 >= 33 && sub2 >= 33 && sub3 >= 33 && sub4 >= 33 && sub5 >= 33) {
        printf("You are Passed\n");
    }
    else {
        printf("You are fail\n");
    }
    return 0;
}