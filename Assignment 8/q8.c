/*
            1
          1 2 1
        1 2 3 2 1
*/
#include<stdio.h>
int main() {
    int num, temp;
    printf("Enter a number: ");
    scanf("%d", &num);

    int k = num + 1, l = k;;
    for (int i = 1; i <= num; i++) {
        temp = 1;
        for (int j = 1; j <= num + (num - 1); j++) {
            if (j >= k - i && j <= l - i) {
                printf("%d", temp);
                if (j < num) {
                    temp++;
                } else {
                    temp--;
                }
                    
            }
            else {
                printf(" ");
            }
        }
        l = l + 2;
        printf("\n");
    }
    return 0;
}