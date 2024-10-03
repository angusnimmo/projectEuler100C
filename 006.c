#include <stdio.h>

int main(void)
{
    int sum_squares = 0;
    int square_sum = 50 * 50 * 101 * 101;
    
    for (int i = 1; i <= 100; i++)
    {
        sum_squares += i * i;
    }

    printf("%i\n", square_sum - sum_squares);
}
