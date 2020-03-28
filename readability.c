#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void)
{
    // getting user input
    string text = get_string("Text: ");

    int i = 0;
    int letters = 0;
    int words = 1;
    int sentences = 0;

    // looping through each character of string
    while (i < strlen(text))
    {
        // test for if letter
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        {
            letters++;
        }

        // test for word end
        else if (text[i] == ' ')
        {
            words++;
        }

        else if (i > 0 && (text[i] == '!' || text[i] == '?' || text[i] == '.') && isalnum(text[i - 1]))
        {

            sentences++;
        }
        i++;
    }

    // main algorithm
    float grade = 0.0588 * (100 * (float) letters / (float) words) - 0.296 * (100 * (float) sentences / (float) words) - 15.8;


    if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", (int) round(grade));
    }
}
