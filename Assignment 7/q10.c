// 10. Write a program to print all Armstrong numbers under 1000
#include<stdio.h>
int main() {
    int num, numOfDigit = 0, temp, temp1;
    int sum = 0, product = 1, lastDigit;
    for (num = 0; num <= 1000; num++) {
        numOfDigit = 0;
        sum = 0;
        temp = num;
        temp1 = num;
        // printf("Number is %d\n", num);
        //  First to find the number of digits
        while (temp != 0) {
            numOfDigit++;
            temp = temp / 10;
        }
        // printf("Num of digit is %d\n", numOfDigit);
        // Check for Armstrong number
        for (int i = 1; i <= numOfDigit; i++) {
            lastDigit = temp1 % 10;
            product = 1;
            for (int j = 1; j <= numOfDigit; j++) {
                product = product * lastDigit;
            }
            // printf("Product is %d\n", product);
            sum = sum + product;
            // printf("%d) Sum %d\n", i, sum);
            temp1 = temp1 / 10;
        }
        if (num == sum) {
            printf("%d ", num);
        }
    }

    return 0;
}