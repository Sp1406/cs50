#include <cs50.h>
#include <stdio.h>

#define QUARTER 25
#define DIME 10
#define NICKEL 5
#define PENNY 1

int coins_needed(int change);

int main(void)
{
    int change;

    // Prompt user for change owed
    do
    {
        change = get_int("Change owed: ");
    }
    while (change < 0);

    // Calculate and print the number of coins needed
    printf("%i\n", coins_needed(change));
}

// Calculates the minimum number of coins needed for the given change
int coins_needed(int change)
{
    int coins = 0;

    // Calculate using a greedy algorithm
    while (change != 0)
    {
        if (change >= QUARTER)
        {
            change -= QUARTER;
            coins++;
        }
        else if (change >= DIME)
        {
            change -= DIME;
            coins++;
        }
        else if (change >= NICKEL)
        {
            change -= NICKEL;
            coins++;
        }
        else
        {
            change -= PENNY;
            coins++;
        }
    }

    return coins;
}
