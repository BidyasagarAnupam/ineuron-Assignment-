// Write a program to check whether roots of a given quadratic equation are real &
// distinct, real & equal or imaginary roots
#include <stdio.h>
int main()
{
    int a, b, c, D;
    printf("A quadratic equation of the type ax^2 + bx + c = 0\n");
    printf("So, enter the value of a,b,c: ");
    scanf("%d %d %d", &a, &b, &c);
    D = (b * b) - (4 * a * c);
    if (D > 0)
    {
        printf("The Roots of quadration equation %dx^2 + %dx + %d = 0 are \"Real & Distinct\"", a, b, c);
    }
    else if (D < 0)
    {
        printf("The Roots of quadration equation %dx^2 + %dx + %d = 0 are \"Imaginary\"", a, b, c);
    }
    else
    {
        printf("The Roots of quadration equation %dx^2 + %dx + %d = 0 are \"Real & Equal\"", a, b, c);
    }
    return 0;
}