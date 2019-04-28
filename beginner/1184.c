#include <stdio.h>

int main()
{
    int i, j, c = 0, b = 1;
    char x[2];
    float m[12][12], som = 0, med = 0;
    scanf("%s", &x[0]);
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%f", &m[i][j]);
        }
    }
    if (strcmp(x, "S") == 0)
    {
        for (j = 0; j < 11; j++)
        {
            for (i = b; i < 12; i++)
            {
                som += m[i][j];
                c++;
            }
            b++;
        }
        printf("%d\n", c);
        printf("%.1f\n", som);
    }
    else if (strcmp(x, "M") == 0)
    {
        for (j = 0; j < 11; j++)
        {
            for (i = b; i < 12; i++)
            {
                med += m[i][j];
                c++;
            }
            b++;
        }
        printf("%.1f\n", med / 66);
    }

    return 0;
}