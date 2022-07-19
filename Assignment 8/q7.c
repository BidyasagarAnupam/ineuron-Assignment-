/*
* * * * * * * * * *
* * * *      * * * *
* * *           * * *
* *                * *
*                     *
*/
#include<stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int k = num+2;
    for(int i=1; i<=num; i++) {
        for(int j=1; j<=num*2; j++) {
            if(j<=(num+1  - i) || j>= k-i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        k = k+2;
        printf("\n");
    }
    return 0;
}