#include <cs50.h>
#include <stdio.h>
#include <math.h>
int main()
{
    long N;
    do
    {
        N = get_long("numbers:");
    }
    while (N < 0);

    int odd = 0;
    int even = 0;
    long NSave = N;
    while (N > 0)
    {
        odd = odd + N % 10;
        N = N / 100;
    }
    N = NSave / 10;
    while (N > 0)
    {
        even = even + ((N % 10) * 2) / 10 + ((N % 10) * 2) % 10;
        N = N / 100;
    }
    int sum;
    sum = odd + even;
    N = NSave;
    int total = sum % 10;
    if (total == 0)
    {
        if (N / pow(10, 14) > 0 && (N / (long)pow(10, 13) == 34 || N / (long)pow(10, 13) == 37))
        {
            printf("AMEX\n");
        }
        else if (N / pow(10, 15) > 0 && (N / (long)pow(10, 14) == 51 || N / (long)pow(10, 14) == 52 || N / (long)pow(10, 14) == 53
                                         || N / (long)pow(10, 14) == 54 || N / (long)pow(10, 14) == 55))
        {
            printf("MASTERCARD\n");
        }
        else if ((N / pow(10, 12)  > 0 || N / pow(10, 15)  > 0) && (N / (long)pow(10, 12)  == 4 || N / (long)pow(10, 15)  == 4))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
    return 0;
}
