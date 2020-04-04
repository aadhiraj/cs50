#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    for (int i = 0; i < strlen(argv[1]); i++) 
    {
        for (int j = i + 1; j < strlen(argv[1]); j++) 
        {
            if (argv[1][i] == argv[1][j]) 
            {   
                printf("There are duplicate characters in key\n");
                return 1;
            }
        }
    }            

    if (argc == 2 && strlen(argv[1]) == 26)
    {
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            if (!isalpha(argv[1][i]))
            {
                printf("Key must contain 26 characters\n");
                return 1;
            
            }
        }
        
        string text = get_string("plaintext: ");
        
        for (int i = 0; i < strlen(text); i++)
        {
            if (isupper(text[i]))
            {
                int number = (int) text[i] - 'A';
                text[i] = toupper(argv[1][number]);
            }
            else if (islower(text[i]))
            {
                int numb = (int) text[i] - 'a';
                text[i] = tolower(argv[1][numb]);
            }
        }
        printf("ciphertext: %s\n", text);
        return 0;
    }
    else
    {
        printf("Usage-- ./substitution key\n");
        return 1;
    }


}