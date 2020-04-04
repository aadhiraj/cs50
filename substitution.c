#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    // checking if no input
    if (argc != 2)
    {
        printf("Usage-- ./substitution key\n");
        return 1;
    }

    // for loop to check if there are duplicates in argv[1]
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        for (int j = i + 1; j < strlen(argv[1]); j++)
        {
            if (argv[1][i] == argv[1][j])
            {
                // returning error messages
                printf("There are duplicate characters in key\n");
                return 1;
            }
        }
    }

    // checking if lenght is equal to 26
    if (strlen(argv[1]) == 26)
    {
        // looping through each character
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            if (!isalpha(argv[1][i])) // not alphabet -- error
            {
                printf("Key must contain 26 characters\n");
                return 1;

            }
        }

        string text = get_string("plaintext: "); // user input

        // looping through each character again
        for (int i = 0; i < strlen(text); i++)
        {
            if (isupper(text[i])) // if uppercase
            {
                int number = (int) text[i] - 'A';
                text[i] = toupper(argv[1][number]);
            }
            else if (islower(text[i])) // if lowercase
            {
                int numb = (int) text[i] - 'a';
                text[i] = tolower(argv[1][numb]);
            }
        }
        printf("ciphertext: %s\n", text); // encrypted bit
        return 0;
    }

    else
    {
        printf("Usage-- ./substitution key\n"); // if wrong key
        return 1;
    }
}