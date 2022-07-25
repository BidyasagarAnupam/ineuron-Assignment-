// 4. Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
void printNaturalNumber(int);
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printNaturalNumber(num);
    return 0;
}
void printNaturalNumber(int num) {
    for(int i=1; i<= num; i++) {
        printf("%d ", i);
    }
}