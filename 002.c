#include <stdio.h>

int main(void)
{
    int f0 = 1;
    int f1 = 1;
    int f2 = 2;
    int count = 0;
    
    while (f2 < 4e6)
    {
        if (f2 % 2 == 0)
        {
            count += f2;
        }
        
        f0 = f1;
        f1 = f2;
        f2 += f0;
    }
    
    printf("%i\n", count);
}
