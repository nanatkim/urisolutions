#include <stdio.h>

int main()
{
    int i, aux = 0, j = 19, x[20], b;
    for (i = 0; i < 20; i++)
    {
        scanf("%d", &x[i]);
    }
    for (i = 0; i < 10; i++)
    {
        aux = x[i];
        x[i] = x[j];
        x[j] = aux;
        j--;
    }
    for (i = 0; i < 20; i++)
    {
        printf("N[%d] = %.d\n", i, x[i]);
    }

    return 0;
}