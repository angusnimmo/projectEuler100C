#include <stdio.h>
#include <math.h>

int main(void)
{
    int count = 6;
    int x = 13;
    
    while (count < 10001)
    {
        x += 2;
        int flag = 1;
        
        for (int y = 3; y < sqrt(x) + 2; y += 2)
        {
            if (x % y == 0)
            {
                flag = 0;
            }
        }
        
        if (flag == 1)
        {
            count += 1;
        }
    }

    printf("%i\n", x);
}
