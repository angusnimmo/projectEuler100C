#include <stdio.h>
#include <math.h>

int main(void)
{
    long long n = 600851475143;
    int pf = 1;
    
    for (long i = 3; i <= round(sqrt(n)); i += 2)
    {
        while (n % i == 0)
        {
            if (i > pf)
            {
                pf = i;
            }
            
            n /= i;
        }
    }
    
    if (n > pf)
    {
        pf = n;
    }
    
    printf("%i\n", pf);
}
