#include <stdio.h>

int main()
{
    int i, j, c = 0, b = 11, a = 0;
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
        for (i = 11; i > 0; i--)
        {
            for (j = b; j > a; j--)
            {
                som += m[i][j];
                c++;
                printf("i - %d j- %d\n", i, j);
            }
            // b--;
            a++;
        }
        printf("%.1f\n", som);
    }
    else if (strcmp(x, "M") == 0)
    {
        for (i = 11; i > 0; i--)
        {
            for (j = b; j > a; j--)
            {
                med += m[i][j];
                c++;
            }
            //b--;
            a++;
        }
        printf("%.1f\n", med / 66);
    }

    return 0;
}