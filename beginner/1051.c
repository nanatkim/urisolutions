#include <stdio.h>

int main()
{

    float a = 0, b = 0, c, d, e, f, g, soma;
    scanf("%f", &a);

    if (a <= 2000)
    {
        printf("Isento\n");
    }
    else if (a >= 2000.01 && a <= 3000)
    {
        c = a - 2000;
        b = c * 0.08;
        printf("R$ %.2f\n", b);
    }
    else if (a >= 3000.01 && a <= 4500)
    {
        c = 1000;
        b = c * 0.08;
        d = a - 3000;
        e = d * 0.18;
        soma = b + e;
        printf("R$ %.2f\n", soma);
    }
    else if (a > 4500)
    {
        c = 1000;
        b = c * 0.08;
        d = 1500;
        e = d * 0.18;
        f = a - 4500;
        g = f * 0.28;
        soma = b + e + g;
        printf("R$ %.2f\n", soma);
    }
}