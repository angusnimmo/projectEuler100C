#include <stdio.h>

int main(void)
{
    int units_len[] = {3, 3, 5, 4, 4, 3, 5, 5, 4}; // 9
    int teens_len[] = {3, 6, 6, 8, 8, 7, 7, 9, 8, 8}; // 10
    int tens_len[] = {6, 6, 5, 5, 5, 7, 6, 6}; // 8
    int hundreds_len[] = {10, 10, 12, 11, 11, 10, 12, 12, 11}; // 9
    int thousand_len = 11;
    int and_len = 3;
    int count = 0;
    
    for (int i = 0; i < 10; i++)
    {
        count += 10 * teens_len[i];
        
        if (i < 9)
        {
            count += 90 * units_len[i];
            count += 100 * hundreds_len[i];
        }
        
        if (i < 8)
        {
            count += 100 * tens_len[i];
        }
    }
    
    count += thousand_len;
    count += 891 * and_len;
    printf("%i\n", count);
}
