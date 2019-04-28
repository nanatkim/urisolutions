#include <stdio.h>

int main()
{
    int i, j, c = 0, b = 1, a = 10;
    char x[2];
    double m[12][12], som = 0, med = 0;
    scanf("%s", &x[0]);
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%lf", &m[i][j]);
        }
    }
    if (strcmp(x, "S") == 0)
    {
        for (j = 11; j >= 7; j--)
        {
            for (i = b; i <= a; i++)
            {
                som += m[i][j];
                c++;
                // printf("j - %d i - %d\n", j,i);
            }
            b++;
            a--;
        }
        printf("%.1lf\n", som);
    }
    else if (strcmp(x, "M") == 0)
    {
        for (j = 11; j >= 7; j--)
        {
            for (i = b; i <= a; i++)
            {
                med += m[i][j];
                c++;
                //
            }
            b++;
            a--;
        }
        printf("%.1lf\n", med / 30);
    }

    return 0;
}