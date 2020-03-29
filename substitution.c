#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main (int argc, string argv[])
{
    string key = argv[1];
    
    string input = get_string("plaintext: ");
    
    if (argc != 2 || strlen(key) != 26)
    {
        printf("Usage: ./substitution key"); 
        return 1;
    }
    
    else
    {
    for (int i = 0; i < strlen(input); i++)
    {
        if (isupper(input[i]))
        {
            int ascii = (int)input[i];
            int keyas = ascii - 65;
            input[i] = toupper(key[ascii]);
        }
        if (islower(input[i]))
        {
            int ascii = (int)input[i];
            int keyas = ascii - 97;
            input[i] = tolower(key[keyas]);
        }
    }
    printf("ciphertext: %s", input);
    }
    
    }