/*
Write a program which takes the cost price and selling price of a product from the user.
Now calculate and print profit or loss percentage.
*/
#include <stdio.h>
int main()
{
    int cp, sp;
    float profit, loss;
    printf("Enter the Cost price and Selling price: ");
    scanf("%d %d", &cp, &sp);

    if (sp > cp)
    {
        profit = sp - cp;
        printf("Profit%% = %f%%", (profit * 100) / cp);
    }
    else
    {
        loss = cp - sp;
        printf("Loss%% = %f%%", (loss * 100) / cp);
    }
    return 0;
}