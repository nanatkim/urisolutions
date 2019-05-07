#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

int cmpfunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main(int argc, char *argv[])
{
    int n, q, r = 1, loc, y, x, aux;

#ifdef DEBUG
    clock_t Ticks[2];
    Ticks[0] = clock();
#endif

    do
    {
        scanf("%d %d", &n, &q);
        if (n == 0 & q == 0)
        {
            break;
        }
        int per[n];
        for (x = 0; x < n; x++)
        {
            scanf(" %d", &per[x]);
        }

        qsort(per, n, sizeof(int), cmpfunc);

        printf("CASE# %d:\n", r);
        for (x = 0; x < q; x++)
        {
            scanf("%d", &loc);
            for (y = 0; per[y] != loc; y++)
                ;
            if (y > n)
            {
                printf("%d not found\n", loc);
            }
            else
            {
                printf("%d found at %d\n", loc, y + 1);
            }
        }
        r++;
    } while ((n != 0 && q != 0) || r > 65);

#ifdef DEBUG
    Ticks[1] = clock();
    double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
    printf("Tempo gasto: %g ms.(%.2lf)", Tempo, Tempo * 60);
#endif
    return 0;
}