#include <stdio.h>

int main()
{
    int a = 1, l, c, m[100][100];
    while (a != 0)
    {
        scanf("%d", &a);
        int tam = a;
        int cont = 1;
        int ini = 0;
        int fim = tam - 1;

        for (c = 0; c < a; c++)
        {
            for (l = ini; l <= fim; l++)
            {
                m[l][ini] = cont;
                m[ini][l] = cont;
                m[l][fim] = cont;
                m[fim][l] = cont;
            }
            cont++;
            ini++;
            fim--;
        }
        for (l = 0; l < a; l++)
        {
            for (c = 0; c < a; c++)
            {
                if (c == a - 1)
                {
                    printf("%3d", m[l][c]);
                }
                else
                {
                    printf("%3d ", m[l][c]);
                }
            }
            printf("\n");
        }
        if (a != 0)
        {
            printf("\n");
        }
    }

    return 0;
}