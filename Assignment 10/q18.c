/*
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/
#include<stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int k = num + 1, l = k;
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num + (num - 1); j++) {
            if (j >= k - i && j <= l - i) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        l = l + 2;
        printf("\n");
    }
    for (int i = 2; i <= num; i++) {
        for (int j = 1; j <= num * 2 - 1; j++) {
            if (j >= i && j <= num * 2 - i) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}