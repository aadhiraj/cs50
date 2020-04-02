#include <cs50.h>
#include <stdio.h>

void repeat_char(string character, int times);

int main(void)
{
    // getting user input
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height > 8 || height < 1);
    // looping through height
    int num = height - 1;
    for (int i = 1; i <= height; i++)
    {
        repeat_char(" ", num);
        repeat_char("#", i);
        printf("  ");
        repeat_char("#", i);
        printf("\n");
        num--; // decreasing spaces before hashes
    }
}

// function
void repeat_char(string character, int times)
{
    // looping through number of times repeat
    for (int i = 0; i < times; i++)
    {
        printf("%s", character);
    }
}
