#include <cs50.h>
#include <stdio.h>
void repeat (string c, int n);

int main(void)
{
   int number;
   do
   {
       number = get_int ("Height: ");
   }
   while (number < 1 || number > 8);

   for (int i = 0; i < number; i++)
   {
       repeat (" ", (number - i - 1));
       repeat ("#", (i+1));
       printf ("\n");
   }
}

void repeat (string c, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf ("%s", c);
    }
}
