// 1. Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float areaOfCircle(int);
int main() {
    int radius;
    printf("Enter the radius: ");
    scanf("%d", &radius);
    printf("The area if %.2f", areaOfCircle(radius));
    return 0;
}
float areaOfCircle(int radius) {
    return 3.141*radius*radius;
}