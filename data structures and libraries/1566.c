#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define MAX 211

int main(int argc, char *argv[])
{
#ifdef DEBUG
    clock_t tick[2];
    tick[0] = clock();
#endif
    int h[MAX], nc, x, num, z, n, y, c = 0;
    scanf("%d", &nc);

    for (x = 0; x < nc; x++)
    {
        for (y = 0; y < MAX; y++)
        {
            h[y] = 0;
        }
        c = 0;
        scanf("%d", &n);

        for (y = 0; y < n; y++)
        {
            scanf("%d", &num);
            h[num - 20]++;
        }
        //qsort(h,MAX,sizeof(h[0]),comp);
        for (y = 0; y < MAX; y++)
        {
            //if(h[y]!=0){
            for (z = 1; z <= h[y]; z++)
            {
                printf("%d", y + 20);
                c++;
                if (c != n)
                {
                    printf(" ");
                }
            }
            //}
        }

        printf("\n");
    }
#ifdef DEBUG
    tick[1] = clock();
    double tempo = (tick[1] - tick[0]) * 1000.0 / CLOCKS_PER_SEC;
    printf("duracao: %g", tempo);
#endif
    return 0;
}