#include <stdio.h>

long collatz_length(long n);

int main(void)
{
    long n = 1;
    long result = 1;
    long max = 1;
    
    while (n < 1000000)
    {
        n++;
        long temp = collatz_length(n);
        
        if (temp > max)
        {
            max = temp;
            result = n;
        }
    }
    
    printf("%li\n", result);
}

long collatz_length(long n)
{
    long steps = 0;
    long temp = n;
    
    while (temp != 1)
    {
        steps++;
        
        if (temp % 2 == 0)
        {
            temp /= 2;
        }
        else
        {
            temp = 3 * temp + 1;
        }
    }
    
    return steps;
}
