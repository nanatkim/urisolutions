#include <stdio.h>

int main()
{
    int a, b, i = 0, s, j;
    while (i != 1)
    {
        scanf("%d%d", &a, &b);
        s = 0;
        if (a <= 0 || b <= 0)
        {
            i++;
        }
        else if (a > b)
        {
            for (; b <= a; b++)
            {
                s += b;
                printf("%d ", b);
            }
            printf("Sum=%d\n", s);
        }
        else
        {
            for (; a <= b; a++)
            {
                s += a;
                printf("%d ", a);
            }
            printf("Sum=%d\n", s);
        }
    }

    return 0;
}