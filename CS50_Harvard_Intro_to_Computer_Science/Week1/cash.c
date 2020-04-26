// Returns minimun number of coins needed as change

// Georgios Spyrou
// 26 April 2019
// Problem Set 1

#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Function that asks user about amount of change
int request_change()
{
    bool is_end = false;
    int cents;
    
    while (is_end == false)
    {
        float mny_owed = get_float("Change owed:");
        
        if (mny_owed > 0)
        {
            cents = round(mny_owed * 100);
            is_end = true;
        }
        else
        {
            continue;
        }
    }
    return cents;
}

// Main function that performs the operation
int main(void)
{
    int quarter = 25, dime = 10, nickel = 5, penny = 1;
    int num_minimum_coins = 0;
    int change = request_change();    
    
    while (change >= 25)
    {
        change = change - quarter;
        num_minimum_coins += 1;
    }
    while (change >= 10)
    {
        change = change - dime;
        num_minimum_coins += 1;
    }
    while (change >= 5)
    {
        change = change - nickel;
        num_minimum_coins += 1;
    }
    while (change > 0)
    {
        change = change - penny;
        num_minimum_coins += 1;
    }
    
    printf("%d\n", num_minimum_coins);
    
    return 0;
}