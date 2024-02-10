#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i, j, count;
    for (i = 2;i<=n; i++)
    {
        count = 0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        { printf("%d\t",i);
            
        }
    }
}