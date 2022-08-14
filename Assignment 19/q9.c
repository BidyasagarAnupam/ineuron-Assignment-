// Write a program that asks the user to enter a username. If the username entered is one of the names in the list then the user is allowed to calculate the factorial of a number. Otherwise, an error message is displayed
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//  function declaration
void factorial(char*);

int main() {

    char nameCollection[10][20] = { "Anupam", "Bidyasagar", "Satya", "Gouri", "Subham", "Dibyojyoti", "Arti", "Rajeeb", "Narayan", "Snigdharani" };

    char str[20];
    printf("Enter your Name: ");
    fgets(str, 20, stdin);

    int size = strlen(str);
    int i, j, check = 0;
    //  logic
    for (i = 0; i < 10; i++) {
        int sizeOfMainString = strlen(nameCollection[i]);
        for (j = 0; (size - 1 == sizeOfMainString) && (str[j] != '\n' && nameCollection[i][j] != '\n'); j++) {
            if (str[j] != nameCollection[i][j]) {
                break;
            }
        }
        if (j == size - 1) {
            check = 1;
            factorial(str);
            break;
        }
        if (check) {
            break;
        }
    }
    if (!check) {
        printf("%s is not registered....", str);
    }
    printf("\n");
    system("pause");
    return 0;
}

//  functino defination
void factorial(char str[]) {
    int fact = 1, num;
    printf("Hello, %s", str);
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 2; i <= num; i++) {
        fact *= i;
    }
    printf("Factorial of %d is %d", num, fact);
}
