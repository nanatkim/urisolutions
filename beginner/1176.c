#include <stdio.h>

int main()
{
    int a, x, i, p;
    double fib[64], f, fa;
    scanf("%d", &x);
    while (x != 0)
    {
        p = 0;
        f = 0;
        fa = 1;
        scanf("%d", &a);
        for (i = 0; i <= a; i++)
        {
            fib[i] = f;
            if (i <= a)
            {
                f += fa;
                fa = f - fa;
            }
            else
            {
                p = i;
            }
        }
        printf("Fib(%d) = %.0lf\n", a, fib[a]);
        x--;
    }

    return 0;
}