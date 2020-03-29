#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main (int argc, string argv[])
{
    string key = argv[1];
    if (argc != 2 || strlen(key) != 26)
    {
        printf("Usage: ./substitution key\n"); 
        return (1);
    }
    
    else
    {
        string input = get_string("plaintext: ");
        printf("ciphertext: ");
    for (int i = 0; i < strlen(input); i++)
    {
        if (isupper(input[i]))
        {
            int ascii = (int)input[i];
            int keyas = ascii - 65;
            char letter = key[keyas];
            printf("%c", toupper(letter));
        }
        if (islower(input[i]))
        {
            int ascii = (int)input[i];
            int keyas = ascii - 97;
            char letter = key[keyas];
            printf("%c", tolower(letter));
        }
    }
    }
    printf("\n");
    }