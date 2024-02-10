#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i, j, count;
    for (i = n+1;; i++)
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
        {
            int temp = i, rev = 0;
            while (temp > 0)
            {
                int rem = temp % 10;
                rev = rev * 10 + rem;
                temp = temp / 10;
            }
            if (rev == i)
                {printf("%d ", i); break;}
        }
    }
}