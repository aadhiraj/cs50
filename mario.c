#include <cs50.h>
#include <stdio.h>

void repeat_char (string character, int times);

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height > 8 || height < 1);
    int num = height - 1;
    for (int i = 1; i <= height; i++)
    {
        repeat_char(" ", num);
        repeat_char("#", i);
        printf("  ");
        repeat_char("#", i);
        printf("\n");
        num--;
    }
}

void repeat_char (string character, int times)
{
    for (int i = 0; i < times; i++)
    {
        printf("%s", character);
    }
}
