/*
* * * * *
  * * *
    *
*/
#include<stdio.h>
int main() {
    int num = 10, k = 8;
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 19; j++) {
            if (((j >= 4 - i) && (j <= k - i)) || ((j >= 14 - i) && (j <= 10 + k - i))) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        k = k+2;
        printf("\n");
    }
    // Down Part
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num * 2 - 1; j++) {
            if (i == 1) {
                switch (j)
                {
                case 7:
                    printf("M ");
                    break;
                case 8:
                    printf("y ");
                    break;
                case 9:
                    printf("S ");
                    break;
                case 10:
                    printf("i ");
                    break;
                case 11:
                    printf("r ");
                    break;
                case 12:
                    printf("G ");
                    break;

                default:
                    printf("* ");
                    break;
                }
            }
            else {
                if (j >= i && j <= num * 2 - i) {
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