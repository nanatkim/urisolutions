#include <stdio.h>

int main()
{
    int n, i, menor = 1000, p;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] < menor)
        {
            menor = a[i];
            p = i;
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", p);

    return 0;
}