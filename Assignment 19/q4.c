// Write a program to search a string in the list of strings.
#include<stdio.h>

int main() {
    int clock;
    char str[10][20] = { "Binjhua", "Bahalda", "Rairangpur", "Karanjia", "Bhopal", "Balasore", "Jamshedpur", "Allahbad", "Agra", "Raurkela" };

    char searchString[20];
    printf("Enter your City name to check is it present in our d.b: ");
    fgets(searchString, 20, stdin);

    //  logic for searching
    for (int i = 0; i < 10; i++) {
        for (int j = 0; searchString[j] != '\n'; j++) {
            if (searchString[j] == str[i][j]) {
                clock = 1;
            }
            else {
                clock = 0;
                break;
            }
        }
        if (clock == 1) {
            printf("%s is stored in our database", searchString);
            break;
        }
    }
    if (clock != 1) {
        printf("%s is not stored in our database", searchString);
    }
    return 0;
}
