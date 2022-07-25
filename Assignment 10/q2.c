// 2. Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
float simpleIntrest(int, int, int);
int main() {
    int p, t, r;
    printf("Enter Principle, time and Rate of intrest: ");
    scanf("%d %d %d", &p, &t, &r);
    printf("Simple intrest is %.2f", simpleIntrest(p,t,r));
    return 0;
}
float simpleIntrest(int p, int t, int r) {
    return (p * t * r) / 100;
}