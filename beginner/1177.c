#include <stdio.h>

int main()
{
    int t, n[1000], i, a = 0;
    scanf("%d", &t);
    for (i = 0; i < 1000; i++)
    {
        if (a % t == 0)
        {
            a = 0;
            n[i] = a;
        }
        else
        {
            n[i] = a;
        }
        a++;
    }
    for (i = 0; i < 1000; i++)
    {
        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}