#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // getting change as input
    float change;
    do
    {
        change = get_float("Change owed: ");
    }
    while (change < 0.0);
    int cents = round (change * 100); // rounding to count for error

    int coins = 0;
    int tot = 0;
    
    coins = coins + (cents/25);
    tot = (cents%25);
        
    coins = coins + (tot/10);
    tot = (tot%10);

    coins = coins + (tot/5);
    tot = (tot%5);

    coins = coins + (tot/1);
    tot = (tot%1);
    
    printf("%i\n", coins);
}

