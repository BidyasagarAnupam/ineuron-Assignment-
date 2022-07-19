/*
*
* *
*   *
*     *
*       *
*         *
*            *
*              *
*                 *
* * * * * * * * * *
*/
#include<stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num; j++) {
            if (i == num) {
                printf("* ");
            }
            else {
                if (j <= i && (j==1 || j==i)) {
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