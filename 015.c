#include <stdio.h>

int main(void)
{
    long long result = 1;
    
    for (int i = 1; i <= 20; i++)
    {
        result *= (20 + i);
        result /= i;
    }
    
    printf("%lli\n", result);
}
