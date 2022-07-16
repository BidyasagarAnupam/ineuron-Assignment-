// Write a program to print the first 10 odd natural numbers in reverse order.
#include<stdio.h>
int main() {
    for(int i = 10; i>=1; i--) {
        printf("%d ", i*2-1);
    }
return 0;
}