#include <stdio.h>

int main(void)
{
    int months[12] = {3, 3, 6, 1, 4, 6, 2, 5, 0, 3, 5, 1};
    int months_leap[12] = {3, 4, 0, 2, 5, 0, 3, 6, 1, 4, 6, 2};
    int day = 2;
    int count = 0;
    
    for (int year = 1901; year < 2001; year++)
    {
        if (year % 4 == 0)
        {
            for (int i = 0; i < 12; i++)
            {
                if (day % 7 == 0)
                {
                    count += 1;
                }
                
                day = (day + months_leap[i] + 1) % 7;
            }
        }
        else
        {
            for (int i = 0; i < 12; i++)
            {
                if (day % 7 == 0)
                {
                    count += 1;
                }
                
                day = (day + months[i] + 1) % 7;
            }
        }
    }
    
    printf("%i\n", count);
}
