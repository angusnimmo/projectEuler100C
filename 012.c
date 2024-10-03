#include <stdio.h>

int main(void)
{
    long tri;
    int n = 1;
    int divisors = 1;
    
    while (divisors < 500)
    {
        n++;
        tri = n * (n + 1) / 2;
        divisors = 0;
        
        for (int i = 1; i * i < tri; i++)
        {
            if (tri % i == 0)
            {
                divisors += 2;
            }
        }
    }
    
    printf("%li\n", tri);
}
