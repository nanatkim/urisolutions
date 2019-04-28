#include <stdio.h>

int main()
{

    int p[100];
    int i, maior = 0, posic = 0;
    for (i = 1; i <= 100; i++)
    {
        scanf("%d", &p[i]);
    }
    for (i = 1; i <= 100; i++)
    {
        if (p[i] > maior)
        {
            maior = p[i];
            posic = i;
        }
    }
    printf("%d\n%d\n", maior, posic);

    return 0;
}