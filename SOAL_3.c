#include <stdio.h>
#include <math.h>

int is_prime(unsigned long long num)
{
    if (num <= 1)
    {
        return 0;
    }

    if (num == 2) 
    {
        return 1;
    }

    if (num % 2 == 0) 
    {
        return 0;
    }

    unsigned long long limit = sqrt(num);
    for (unsigned long long i = 3; i <= limit; i += 2)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main(void) 
{
   unsigned long long number;

    scanf("%lld", &number);

    if (is_prime(number)) 
    {
        printf("PRIMA");
    } else {
        printf("BUKAN");
    }
    printf("\n");

    return 0;
}