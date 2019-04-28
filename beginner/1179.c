#include <stdio.h>

int main()
{
    int a, i, p = 0, ip = 0, par[5], impar[5];
    for (i = 0; i < 15; i++)
    {
        scanf("%d", &a);
        if (a % 2 == 0)
        {
            par[p] = a;
            p++;
        }
        else
        {
            impar[ip] = a;
            ip++;
        }
        if (p == 5)
        {
            for (p = 0; p < 5; p++)
            {
                printf("par[%d] = %d\n", p, par[p]);
            }
            p = 0;
        }
        else if (ip == 5)
        {
            for (ip = 0; ip < 5; ip++)
            {
                printf("impar[%d] = %d\n", ip, impar[ip]);
            }
            ip = 0;
        }
    }
    for (i = 0; i < ip; i++)
    {
        printf("impar[%d] = %d\n", i, impar[i]);
    }
    for (i = 0; i < p; i++)
    {
        printf("par[%d] = %d\n", i, par[i]);
    }

    return 0;
}