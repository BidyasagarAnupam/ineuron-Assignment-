/*
        *
      * *
    *   *
  *     *
* * * * *
*/
#include<stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    for(int i=1; i<=num; i++) {
        for(int j=1; j<=num; j++) {
            if(num==i) {
                printf("* ");
            } else {
                if(j >= (num+1-i) && (j==num+1-i || j==num)) {
                printf("* ");
            } else {
                printf("  ");
            }
            }
            
        }
        printf("\n");
    }
    return 0;
}