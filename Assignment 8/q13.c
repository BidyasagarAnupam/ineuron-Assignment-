/*
A B C D E F G F E D C B A
A B C D E F   F E D C B A
A B C D E       E D C B A
A B C D           D C B A
A B C               C B A
A B                   B A
A                       A
*/
#include<stdio.h>
int main() {
    int num, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    int k = num + 1;
    for (int i = 1; i <= num; i++) {
        temp = 'A';
        for (int j = 1; j <= num + (num - 1); j++) {
            if (j <= (num + 1) - i || j >= k - i) {
                printf("%c ", temp);
            }
            else {
                printf("  ");
            }
            if (j < num) {
                temp++;
            }
            else {
                temp--;
            }
        }
        k = k + 2;
        printf("\n");
    }
    return 0;
}