#include <stdio.h>

int main()
{
    int n, a, i, j, s = 0, f = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a);
        for (j = 1; j <= a; j++)
        {
            if (a % j == 0)
            {
                if (j == 1 || j == a)
                {
                    s++;
                }
                else
                {
                    f++;
                }
            }
        }
        if (s == 2 && f < 1)
        {
            printf("%d eh primo\n", a);
        }
        else
        {
            printf("%d nao eh primo\n", a);
        }
        s = 0;
        f = 0;
    }
    return 0;
}