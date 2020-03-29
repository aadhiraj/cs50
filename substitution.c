#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main (int argc, string argv[])
{
    string key = argv[1];
    
    if (argc == 2 && strlen(key) == 26)
    {
        string input = get_string("plaintext: ");
        printf("ciphertext: ");
    for (int i = 0; i < strlen(input); i++)
    {
        if (isalpha(input[i]))
        {
            if (isupper(input[i]))
            {
                int ascii = (int)input[i];
                int keyas = ascii - 65;
                char letter = key[keyas];
                printf("%c", toupper(letter));
            }
            else if (islower(input[i]))
            {
                int ascii = (int)input[i];
                int keyas = ascii - 97;
                char letter = key[keyas];
                printf("%c", tolower(letter));
            }
            else
            {
                printf("%c", input[i]);
            }
        }
        else
        {
            printf("Invalid input\n");
        }
    }
    }
    else
    {
        printf("Usage: ./substitution key\n"); 
        return (1);
    }
    printf("\n");
    }