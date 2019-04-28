#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a > b - c && a < b + c && b > a - c && b < a + c && c > a - b && c < a + b)
    {
        if ((a == b && a != c) || (a == c && a != b) || (c == b && c != a))
        {
            printf("Valido-Isoceles\n");
        }
        else if (a == b && a == c)
        {
            printf("Valido-Equilatero\n");
        }
        else if (a != b && a != c && c != b)
        {
            printf("Valido-Escaleno\n");
        }
        if (a * a == (b * b + c * c))
        {
            printf("Retangulo: S\n");
        }
        else
        {
            printf("Retangulo: N\n");
        }
    }
    else
    {
        printf("Invalido\n");
    }

    return 0;
}