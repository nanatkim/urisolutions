#include <stdio.h>

int main()
{

    int num[10000], x, n;
    scanf("%d", &x);
    for (n = 0; n < x; n++)
    {
        scanf("%d", &num[n]);
    }
    for (n = 0; n < x; n++)
    {
        if (num[n] == 0)
        {
            printf("NULL\n");
        }
        else if (num[n] < 0)
        {
            num[n] = num[n] + num[n] * 2;
            if (num[n] % 2 == 0)
            {
                printf("EVEN NEGATIVE\n");
            }
            else
            {
                printf("ODD NEGATIVE\n");
            }
        }
        else if (num[n] > 0)
        {
            if (num[n] % 2 == 0)
            {
                printf("EVEN POSITIVE\n");
            }
            else
            {
                printf("ODD POSITIVE\n");
            }
        }
    }
}