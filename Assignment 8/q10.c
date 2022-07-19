/*
1 2 3 4 3 2 1
1 2 3   3 2 1
1 2        2 1
1             1
*/
#include<stdio.h>
int main() {
    int num, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    int k = num+1;
    for(int i=1; i<=num; i++) {
        temp = 1;
        for(int j=1; j<=num+(num-1); j++) {
            if(j<= (num+1)-i || j>=k-i) {
                printf("%d ", temp);
            } else {
                printf("  ");
            }
            if(j<num) {
                temp++;
            } 
            else {
                temp--;
            }
        }
        k = k+2;
        printf("\n");
    }
    return 0;
}