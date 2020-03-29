#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    // checking for correct user input
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    else
    {
        // getting user input
        string input = get_string("plaintext: ");
        int k = atoi(argv[1]);

        // looping through each letter and altering it using the formula
        for (int i = 0; i < strlen(input); i++)
        {
            // if uppercase
            if (input[i] >= 'A' && input[i] <= 'Z')
            {
                input[i] = (char)((((int)input[i] - 'A' + k) % 26) + 'A');
            }

            // if lowercase
            if (input[i] >= 'a' && input[i] <= 'z')
            {
                input[i] = (char)((((int)input[i] - 'a' + k) % 26) + 'a');
            }
        }
        printf("ciphertext: %s\n", input);

    }
}