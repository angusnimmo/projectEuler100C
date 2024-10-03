#include <stdio.h>
#include <stdbool.h>

bool is_palindrome(long n);

int main(void)
{
    long temp;
    long result = 0;
    
    for (int i = 101; i < 1000; i++)
    {
        for (int j = 100; j <= i; j++)
        {
            temp = i * j;
            
            if (is_palindrome(temp) && temp > result)
            {
                result = temp;
            }
        }
    }
    
    printf("%li\n", result);
}

bool is_palindrome(long n)
{
    long remainder;
    long reversed = 0;
    long original = n;
    
    while (n != 0)
    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    
    return original == reversed;
}
