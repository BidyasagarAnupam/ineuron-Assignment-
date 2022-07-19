// 3. Write a program which takes the day number of a week and displays a
// unique greeting message for the day.
#include<stdio.h>
int main() {
    int a;
    printf("Enter the day number: ");
    scanf("%d",&a);

    switch(a) {
        case 1:
            printf("Hello, Sunday");
            break;
        case 2:
            printf("Hello, Monday");
            break;
        case 3:
            printf("Hello, Tuesday");
            break;
        case 4:
            printf("Hello, Wednesday");
            break;
        case 5:
            printf("Hello, Thusday");
            break;
        case 6:
            printf("Hello, Friday");
            break;
        case 7:
            printf("Hello, Saturdady");
            break;

        default:
            printf("Enter a valid day number");
            break;
    }
    return 0;
}