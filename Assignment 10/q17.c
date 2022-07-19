/*
* * * * * * * * *
  *           *
    *       *
      *   *
        *
*/
#include<stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num * 2 - 1; j++) {
            if(1 == i) {
                printf("* ");
            } else {
                if (j >= i && j <= num * 2 - i && (j==i || j== num*2-i)) {
                printf("* ");
            }
            else {
                printf("  ");
            }
            }
            
        }
        printf("\n");
    }
    return 0;
}