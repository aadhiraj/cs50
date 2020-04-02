#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    long cc_number = get_long("Number: ");
    int digits = log10(cc_number) + 1; // getting number of digits using log10
    // checking if wrong number of digits
    if (digits != 13 && digits != 15 && digits != 16)
    {
        printf("INVALID\n");
    }
    int sum = 0;
    for (int i = 0; i < digits; i++)
    {
        string cc_string = (string) cc_number;
        if (i % 2 == 1)
        {
            sum = sum + cc_string[i];
        }
        else
        {
            sum = sum + 2 * cc_string[i];
        }
        if (sum % 10 == 0)
        {
            if (digits == 13)
            {
                printf("VISA\n");
            }
            else if (digits == 15)
            {
                printf("AMEX\n");
            }
            else
            {
                int first = 0;
                while (first >= 10)
                {
                    first = cc_number / 10;
                }
                if (first == 4)
                {
                    printf("VISA\n");
                }
                else
                {
                    printf("MASTERCARD\n");
                }
            }

        }
    }
}
