#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

#define MAX 201

typedef struct
{
    char nome[MAX];
    int peso, idade;
    float altura;
} rena;

int comp(const void *p1, const void *p2)
{
    rena *i = (rena *)p1, *j = (rena *)p2;
    if (i->peso > j->peso)
    {
        return -1;
    }
    else if (i->peso < j->peso)
    {
        return 1;
    }
    else
    {
        if (i->idade > j->idade)
        {
            return 1;
        }
        else if (i->idade < j->idade)
        {
            return -1;
        }
        else
        {
            if (i->altura > j->altura)
            {
                return 1;
            }
            else if (i->altura < j->altura)
            {
                return -1;
            }
            else
            {
                return strcmp(i->nome, j->nome);
            }
        }
    }
}

int main(int argc, char *argv[])
{
    int t, n, m, x, y;
    scanf("%d", &t);
    for (x = 0; x < t; x++)
    {
        scanf("%d %d", &n, &m);
        rena renas[n];
        for (y = 0; y < n; y++)
        {
            scanf("%s %d %d %f", renas[y].nome, &renas[y].peso, &renas[y].idade, &renas[y].altura);
        }
        qsort(renas, n, sizeof(renas[0]), comp);
        printf("CENARIO {%d}\n", x + 1);
        for (y = 0; y < m; y++)
        {
            printf("%d - %s\n", y + 1, renas[y].nome);
        }
    }

    return 0;
}