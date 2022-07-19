/*
1 2 3 4 3 2 1
  1 2 3 2 1
    1 2 1
      1
*/
#include<stdio.h>
int main() {
    int num, temp;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        temp=1;
        for (int j = 1; j <= num * 2 - 1; j++) {
            if (j >= i && j <= num * 2 - i) {
                printf("%d", temp);
                if(j<num) {
                    temp++;
                } else {
                    temp--;
                }
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}