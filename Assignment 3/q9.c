// Write a program to find the greatest among three given numbers. Print number once
// if the greatest number appears two or three times.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three number: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("Greatest number is %d", a);
        }
        else
        {
            printf("Greatest number is %d", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("Greatest number is %d", b);
        }
        else
        {
            printf("Greatest number is %d", c);
        }
    }

    return 0;
}