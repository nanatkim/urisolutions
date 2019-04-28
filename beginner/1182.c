#include <stdio.h>

int main()
{
    int a, i, j;
    char x[2];
    float m[12][12], som = 0, med = 0;
    scanf("%d", &a);
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
        for (j = 0; j < 12; j++)
        {
            som += m[j][a];
        }
        printf("%.1f\n", som);
    }
    else if (strcmp(x, "M") == 0)
    {
        for (j = 0; j < 12; j++)
        {
            med += m[j][a];
        }
        printf("%.1f\n", med / 12);
    }
    return 0;
}