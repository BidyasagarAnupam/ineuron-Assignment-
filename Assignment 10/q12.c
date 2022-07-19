/*
A B C D C B A
  A B C B A
    A B A
      A
*/
#include<stdio.h>
int main() {
    int num, temp;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        temp = 'A';
        for (int j = 1; j <= num * 2 - 1; j++) {
            if (j >= i && j <= num * 2 - i) {
                printf("%c ", temp);
                if (j < num) {
                    temp++;
                }
                else {
                    temp--;
                }
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}