// 10. Write a function to print all prime factors of a given number. 
// For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)
#include<stdio.h>
#include<math.h>

// function to check number is prime or not
bool isPrime(int n) {
    for (int j = 2; j <= sqrt(n); j++) {
        if (n % j == 0) {
            // if n is divisible by j then n is not prime, so return false
            return false;
        }
    }
    return true;
}

// function to print all prime factor
void primeFactor(int number) {
    int temp, i;
    while (number != 0) {
        i = 2;
        while (i <= number) {
            if (isPrime(i)) { // i is prime
                
                // if number is divisible by i then print
                if (number % i == 0) {
                    printf("%d, ", i);
                    temp = i; // stored the i value in temp bcz at last we update the number with the help of the i value
                    break;
                }
                // if number is not divisible by i then increase the value of i
                else {
                    i++;
                }
            }
            // if i is not prime we have to increase the value of i
            else {
                i++;
            }
        }
        // update the number with the temp (which is stored before)
        number = number / temp;
        // printf("\nNew number is %d\n", number); (For debbugging)
    }
}


int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Prime factors of %d are: ", num);
    primeFactor(num);
    // printf("End");(For debbugging)
    return 0;
}
