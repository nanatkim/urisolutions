#include <stdio.h>

int main()
{
    int l, c, a, b, i = 0, j = 0;
    scanf("%d%d", &a, &b);
    int m[a][b];
    for (l = 0; l < a; l++)
    {
        for (c = 0; c < b; c++)
        {
            scanf("%d", &m[l][c]);
        }
    }
    for (l = 0; l < a; l++)
    {
        for (c = 0; c < b; c++)
        {
            if (m[l][c] == 42)
            {
                if (m[l - 1][c - 1] == 7 && m[l - 1][c] == 7 && m[l - 1][c + 1] == 7 && m[l][c - 1] == 7 && m[l][c + 1] == 7 && m[l + 1][c - 1] == 7 && m[l + 1][c] == 7 && m[l + 1][c + 1] == 7)
                {
                    i = l;
                    j = c;
                    break;
                }
            }
        }
    }
    if (i == 0 && j == 0)
    {
        printf("%d %d\n", i, j);
    }
    else
    {
        printf("%d %d\n", i + 1, j + 1);
    }

    return 0;
}