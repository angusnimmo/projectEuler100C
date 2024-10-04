#include <stdio.h>

int main(void)
{
    int digits[200] = {0};
    int carry = 0;
    digits[0] = 1;
    
    for (int i = 2; i < 101; i++)
    {   
        for (int j = 0; j < 200; j++)
        {
            digits[j] = digits[j] * i + carry;
            
            if (digits[j] > 9)
            {
                carry = digits[j] / 10;
                digits[j] %= 10;
            }
            else
            {
                carry = 0;
            }
        }
    }
    
    int sum = 0;
    
    for (int i = 0; i < 200; i++)
    {
        sum += digits[i];
    }
    
    printf("%i\n", sum);
}
