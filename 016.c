#include <stdio.h>

int main(void)
{
    int digits[1001] = {0};
    digits[999] = 1;
    
    for (int _ = 0; _ < 1000; _++)
    {
        for (int i = 0; i < 1000; i++)
        {
            if (digits[i + 1] > 4)
            {
                digits[i] = ((2 * digits[i]) % 10) + 1;
            }
            else
            {
                digits[i] = (2 * digits[i]) % 10;
            }
        }
    }
    
    int sum = 0;
    
    for (int i = 0; i < 1000; i++)
    {
        sum += digits[i];
    }
    
    printf("%i\n", sum);
}
