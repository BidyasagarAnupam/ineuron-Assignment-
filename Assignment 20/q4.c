// Write a program in C to demonstrate how to handle the pointers in the program.
#include<stdio.h>

int main() {
    int num = 10;
    int *ptr1, **ptr2, ***ptr3;
    ptr1 = &num;
    ptr2 = &ptr1;
    ptr3 = &ptr2;

    printf("%d %d %d %d\n", num, *ptr1, **ptr2, ***ptr3);
    printf("%d %d %d %d\n", &num, ptr1, *ptr2, **ptr3);
    printf("%d %d %d\n", &ptr1,  ptr2, *ptr3);
    printf(" %d %d\n", &ptr2, ptr3);
    printf("%d\n", &ptr3) ;
    return 0;
}