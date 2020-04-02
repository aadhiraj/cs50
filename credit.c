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
        return 1;
    }
    int sum = 0;
    int cc_array[digits];

    for (int i = 0; i < digits; i++)
    {
        cc_array[i] = cc_number % 10;
        cc_number = cc_number / 10;
    }
    for (int i = 0; i < digits; i++)
    {
        if (cc_array[i] % 2 == 1)
        {
            sum = sum + cc_array[i];
        }
        else
        {
            sum = sum + 2 * cc_array[i];
        }
    }
    if (sum % 10 == 0)
        {
            if (digits == 13)
            {
                printf("VISA\n");
                return 2;
            }
            else if (digits == 15)
            {
                printf("AMEX\n");
                return 3;
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
                    return 4;
                }
                else
                {
                    printf("MASTERCARD\n");
                }
            }

    }
}
