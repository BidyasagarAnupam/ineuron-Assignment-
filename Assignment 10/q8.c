// 8. Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)

#include<stdio.h>

//  Function declaration
int permutation(int, int);

// main function
int main() {
    int n, r;
    printf("Enter the value of number of items and the value of number selected at a time: ");
    scanf("%d %d", &n, &r);
    if (n >= r) {
        printf("The total number of combinatios are %d", permutation(n, r));
    }
    else {
        printf("The number of items must be greater than or equal to number of selected items at a time");
    }
    return 0;
}

//  function for permutation
int permutation(int num, int stop_factorial) {
    int fatorial = 1;
    if (num > 0) {
        while (stop_factorial != 0) {
            fatorial = fatorial * num;
            num--;
            stop_factorial--;
        }
    }
    return fatorial;
}
