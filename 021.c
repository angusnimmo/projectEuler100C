#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int d(int n);

int main(void)
{
    int ceil = 10000;
    int count = 0;
    bool not_visited[ceil];
    memset(not_visited, true, ceil);
    
    for (int i = 1; i < ceil; i++)
    {
        if (not_visited[i])
        {
            int di = d(i);
        
            if ((di != i) && (di < ceil))
            {
                not_visited[di] = false;
                int ddi = d(di);
                
                if (ddi == i)
                {
                    count += i + di;
                }
            }
        }
    }
    
    printf("%i\n", count);
}

int d(int n)
{
    int sum = 1;
    
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
            
            if (i * i != n)
            {
                sum += n / i;
            }
        }
    }
    
    return sum;
}
