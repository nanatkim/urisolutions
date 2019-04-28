#include <stdio.h>

int main()
{

    int x1, y1, x2, y2, i = 0, j = 0, k = 0, cont = 0, p = 0;
    while (i == 0)
    {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0)
        {
            i++;
        }
        else if (x1 == x2 && y1 == y2)
        {
            printf("%d\n", cont);
        }
        else if (x1 == x2 || y1 == y2)
        {
            cont++;
            printf("%d\n", cont);
        }
        else if (y2 < y1)
        {
            if (x2 > x1)
            {
                for (j = x1, k = y1; j <= 8; j++, k--)
                {
                    if (j == x2 && k == y2)
                    {
                        p++;
                    }
                }
                if (p == 0)
                {
                    cont = 2;
                }
                else
                {
                    cont++;
                }
                printf("%d\n", cont);
            }
            else
            {
                for (j = x1, k = y1; j > 0; j--, k--)
                {
                    if (j == x2 && k == y2)
                    {
                        p++;
                    }
                }
                if (p == 1)
                {
                    cont++;
                }
                else if (p == 0)
                {
                    cont = 2;
                }
                printf("%d\n", cont);
            }
        }
        else
        {
            if (x2 > x1)
            {
                for (j = x1, k = y1; j <= 8; j++, k++)
                {
                    if (j == x2 && k == y2)
                    {
                        p++;
                    }
                }
                if (p == 1)
                {
                    cont++;
                }
                else if (p == 0)
                {
                    cont = 2;
                }
                printf("%d\n", cont);
            }
            else
            {
                for (j = x1, k = y1; j > 0; j--, k++)
                {
                    if (j == x2 && k == y2)
                    {
                        p++;
                    }
                }
                if (p == 1)
                {
                    cont++;
                }
                else if (p == 0)
                {
                    cont = 2;
                }
                printf("%d\n", cont);
            }
        }
        cont = 0;
        p = 0;
    }

    return 0;
}s