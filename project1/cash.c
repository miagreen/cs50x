#include <cs50.h>
#include <stdio.h>
#include <math.h>
int main()
{
    float dollars;
    do
    {
    dollars = get_float("Change Oewd:");
    }
    while (dollars < 0);
    int cents = round(dollars * 100);
    int coin[4]={25, 10, 5,1};
    int a = 0;
    int count = 0;
    while (cents > 0)
    {
        if (cents >= coin[a])
        {
            count = count + cents / coin[a];
            cents = cents % coin[a];
        }
        else
        {
            a = a + 1;
        }
    }
printf ("%d\n", count);
return 0;
}
