// 7. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)

#include<stdio.h>

//  Function declaration
int factorial(int, int);
int combination(int, int);

// main function
int main() {
    int n, r;
    printf("Enter the value of number of items and the value of number selected at a time: ");
    scanf("%d %d", &n, &r);
    if(n-r < r) {
        r = n-r;
    }
    if (n >= r) {
        printf("The total number of combinatios are %d", combination(n, r));
    }
    else {
        printf("The number of items must be greater than or equal to number of selected items at a time");
    }
    return 0;
}

// function for combination
int combination(int n, int r) {
    return factorial(n, r) / factorial(r,r);
}

//  function for fcatorial
int factorial(int num, int stop_factorial) {
    int fact = 1;
    if (num > 0) {
        while(stop_factorial != 0) {
            fact = fact * num;
            num--;
            stop_factorial--;
        }
    }
    return fact;
}
