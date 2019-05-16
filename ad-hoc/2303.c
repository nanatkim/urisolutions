#include <stdio.h>

#define MAX 1000

int main()
{
    int plantacao[MAX][MAX];
    int lin, col;
    int m, n;
    int max;
    int cur;
    int i, j, k, l;

    scanf(" %d %d %d %d", &lin, &col, &m, &n);
    max = 0;
    for (i = 0; i < lin; i++)
        for (j = 0; j < col; j++)
            scanf(" %d", &(plantacao[i][j]));

    for (i = 0; i < lin; i += m)
    {
        for (j = 0; j < col; j += n)
        {
            cur = 0;
            for (k = i; k < (i + m); k++)
                for (l = j; l < (j + n); l++)
                    cur += plantacao[k][l];
            if (cur > max)
                max = cur;
        }
    }

    printf("%d\n", max);

    return 0;
}
