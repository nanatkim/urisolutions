#include <stdio.h>

int main()
{
    int n, a, i, j, s;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a);
        for (j = 1; j < a; j++)
        {
            if (a % j == 0)
            {
                s += j;
            }
        }
        if (s == a)
        {
            printf("%d eh perfeito\n", a);
        }
        else
        {
            printf("%d nao eh perfeito\n", a);
        }
        s = 0;
    }

    return 0;
}