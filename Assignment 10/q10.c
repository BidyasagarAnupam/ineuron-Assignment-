// 10. Write a function to print all prime factors of a given number. 
// For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)
#include<stdio.h>
void primeFactor(int);
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Prime factors of %d are: ", num);
    primeFactor(num);
    // printf("End");(For debbugging)
    return 0;
}
void primeFactor(int number) {
    int flag = 0, temp, i;
    while (number != 0) {
        i = 2;
        while (i <= number) {
            flag = 0;
            for (int j = 2; j <= i / 2; j++) {
                if (!(i % j)) {
                    flag++;
                    break;
                }
            }
            if (!(flag == 1)) { // i is prime
                if (number % i == 0) {
                    printf("%d, ", i);
                    temp = i;
                    break;
                }
                else {
                    i++;
                }
            }
            else {
                i++;
            }
        }
        number = number / temp;
        // printf("\nNew number is %d\n", number); (For debbugging)
    }
}