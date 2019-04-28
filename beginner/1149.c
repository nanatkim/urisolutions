#include <stdio.h>

int main()
{
    int a, n = 0, i = 1, soma;
    scanf("%d", &a);
    while (n <= 0)
    {
        scanf("%d", &n);
    }
    soma = a;
    while (i < n)
    {
        soma += a + i;
        i++;
    }
    printf("%d\n", soma);
    return 0;
}