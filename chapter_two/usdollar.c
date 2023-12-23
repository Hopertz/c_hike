// Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay
// that amount using the smallest number of $20, $IO.$5, and $1 bills :
#include <stdio.h>

    int
    main(void)
{

    int amount, twnty, ten, five, one;
  

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    twnty = amount / 20;
    amount = amount - (20 * twnty);

    ten = amount / 10;
    amount = amount - (10 * ten);

    five = amount / 5;
    amount = amount - (5 * five);

    one = amount / 1;
    amount = amount - (1 * one);

    printf("$20 bills: %d\n", twnty);
    printf("$10 bills: %d\n", ten);
    printf(" $5 bills: %d\n", five);
    printf(" $1 bills: %d\n", one);

    return 0;
}