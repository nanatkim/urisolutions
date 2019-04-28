#include <stdio.h>

int main()
{
    int a, b, c, d, soma1, soma2;
    scanf("%d%d%d%d", &a, &b, &c, &d);

    soma1 = c + d;
    soma2 = a + b;

    if (b > c && d > a && soma1 > soma2 && c > 0 && d > 0 && a % 2 == 0)
    {
        printf("Valores aceitos\n");
    }
    else
    {
        printf("Valores nao aceitos\n");
    }
}