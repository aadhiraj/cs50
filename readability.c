#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main (void)
{
    // getting user input
    string text = get_string("Text: ");

    int i = 0;
    int letters = 0;
    int words = 0;
    int sentences = 0;

    // looping through each character of string
    while(i < strlen(text))
    {
        // test for if letter
        if((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        {
            letters++;
        }

        // test for word end
        if(text[i] == ' ')
        {
            words++;
            letters++;
        }

        // test for sentence end
        if (i > 0 && (text[i] == '!' || text[i] == '?' || text[i] == '.') && isalnum(text[i - 1]))
        {

            sentences++;
        }
        i++;
    }

    // main algorithm
    float letters100 = (float) letters / (float) words * 100;
    float sentences100 = (float) sentences / (float) words * 100;
    float index = 0.0588 * letters100 - 0.296 * sentences100 - 15.8;

    if(index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %f\n", index);
    }
}
