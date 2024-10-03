#include <stdio.h>

int power(int b, int e);

int main(void)
{
    int m = 20;
    int n = 5;
    long result = 2 * m * n * (power(m, 4) - power(n, 4));
    printf("%li\n", result);
}

int power(int b, int e)
{
    int temp = b;
    
    for (int i = 0; i < e - 1; i++)
    {
        temp *= b;
    }
    
    return temp;
}
