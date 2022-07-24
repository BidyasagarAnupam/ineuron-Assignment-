// 10. C program to find all roots of a quadratic equation using switch case
#include<stdio.h>
#include<math.h>
int main() {
    int a, b, c, D;
    int root1=0, root2=0;

    printf("Enter the value of a,b and c of a quadratic equation: ");
    scanf("%d %d %d", &a, &b, &c);
    D = (b * b) - (4 * a * c);
    switch (D > 0)
    {
    case 1:
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
        break;
    case 0: switch (D < 0)
    {
    case 1:
        root1 = (-b + sqrt(abs(D))) / (2 * a);
        root2 = (-b - sqrt(abs(D))) / (2 * a);
        break;
    case 0:
        root1 = -b / (2 * a);
        root2 = -b / (2 * a);
    }
    default:
        break;
    }
    printf("Roots are %d and %d", root1, root2);

    return 0;
}