#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct
{
    char codigo[5];
} livro;

int compara(const void *p1, const void *p2)
{
    livro *i = (livro *)p1, *j = (livro *)p2;
    return strcmp(i->codigo, j->codigo);
}

int main(int argc, char *argv[])
{
    int n, x;
    while (scanf("%d", &n) != EOF)
    {
        livro liv[n];
        for (x = 0; x < n; x++)
        {
            scanf(" %s", liv[x].codigo);
            if (strcmp("0000", liv[x].codigo) == 0)
                break;
        }
        qsort(liv, n, sizeof(liv[0]), compara);
        for (x = 0; x < n; x++)
        {
            printf("%s\n", liv[x].codigo);
        }
    }
    return 0;
}