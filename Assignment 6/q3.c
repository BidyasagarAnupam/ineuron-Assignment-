// 3. Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
int main() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i=1; i<=num; i++)
    {
        sum = sum + (i*2-1);
    }
    printf("Sum of first %d odd number is %d\n", num, sum);
    printf("2nd Method -> Sum of first %d odd number is %d", num, num*num);

return 0;
}