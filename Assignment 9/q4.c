/*
4. Write a menu driven program with the following options:
    a. Check whether a given set of three numbers are lengths of an
    isosceles triangle or not
    b. Check whether a given set of three numbers are lengths of sides of
    a right angled triangle or not
    c. Check whether a given set of three numbers are equilateral triangle
    or not
    d. Exit
*/
#include<stdio.h>
#include<stdlib.h>

int main() {
    int side1, side2, side3;
    char a;
    printf("a. Check whether a given set of three numbers are lengths of an isosceles triangle or not\n");
    printf("b. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not\n");
    printf("c. Check whether a given set of three numbers are equilateral triangle or not\n");
    printf("d. Exit\n");
    scanf("%c", &a);

    switch (a)
    {
    case 'a':
        printf("Enter lenght of three sides a triangle: ");
        scanf("%d %d %d", &side1, &side2, &side3);
        if (side1 == side2 || side2 == side3 || side3 == side1) {
            printf("The triangle is \"Isosceles\"");
        }
        else {
            printf("The triangle is not \"Isosceles\"");
        }
        break;
    case 'b':
        printf("Enter lenght of three sides a triangle: ");
        scanf("%d %d %d", &side1, &side2, &side3);
        if ((side1 * side1) == (side2 * side2) + (side3 * side3)
            || (side2 * side2) == (side3 * side3) + (side1 * side1)
            || (side3 * side3) == (side2 * side2) + (side1 * side1)) {
            printf("The triangle is \"Right Angled Triangle\"");
        }
        else {
            printf("The triangle is not \"Right Angled Triangle\"");
        }
        break;
    case 'c':
        printf("Enter lenght of three sides a triangle: ");
        scanf("%d %d %d", &side1, &side2, &side3);
        if ((side1 == side2) && (side2 == side3)) {
            printf("The Triangle is \"Equilateral Triangle\"");
        }
        else {
            printf("The Triangle is not \"Equilateral Triangle\"");
        }
        break;
    case 'd':
        printf("OK! Bye...");
        exit(0);

    default:
        printf("Choose a valid choice...");
        break;
    }
    return 0;
}