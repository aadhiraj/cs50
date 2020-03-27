#include <cs50.h>
#include <stdio.h>
void repeat(string c, int n);

int main(void)
{
    // getting a number from user between 1 and 8 
    int number;
    do
    {
        number = get_int("Height: ");
    }
    while (number > 8 || number < 1);

    // main sequence with a for loop to repeat three sets of characters
    for (int i = 0; i < number; i++)
    {
        repeat(" ", (number - i - 1));
        repeat("#", (i+1));
        printf(" ");
        repeat("#", (i+1));
        printf("\n");
    }
}

// function to repeat a set of character(s) n times
void repeat (string c, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf ("%s", c);
    }
}
