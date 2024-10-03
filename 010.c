#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void)
{
    long n = 2000000;
    bool prime[n];
    memset(prime, true, n);
    
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p])
        {
            for (int i = p * p; i <= n; i += p)
            {
                prime[i] = false;
            }
        }
    }
    
    long long sum = 0;
    
    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            sum += i;
        }
    }
    
    printf("%lli\n", sum);
}
