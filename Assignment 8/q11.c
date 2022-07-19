/*
         A
      A B A
    A B C B A
  A B C D C B A
A B C D E D C B A
*/
#include<stdio.h>
int main() {
    int num, temp;
    printf("Enter a number: ");
    scanf("%d", &num);

    int k = num + 1, l = k;;
    for (int i = 1; i <= num; i++) {
        temp = 'A';
        for (int j = 1; j <= num + (num - 1); j++) {
            if (j >= k - i && j <= l - i) {
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
        l = l + 2;
        printf("\n");
    }
    return 0;
}