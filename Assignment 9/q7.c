/*
7. Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.
*/

// TODO Doubt
#include<stdio.h>
int main() {
    int unit;
    float bill;
    printf("Enter your Electricity Unit: ");
    scanf("%d", &unit);

    switch (unit)
    {
    case 1 ... 50:
        bill = unit * 0.50f;
        break;
    case 51 ... 150:
        bill = unit * 0.75f;
        break;
    case 151 ... 250:
        bill = unit * 1.20f;
        break;

    default:
        bill = unit * 1.50f;
        break;
    }
    bill = bill+(bill*0.2);
    printf("Your bill is %.2f", bill);
    return 0;
}