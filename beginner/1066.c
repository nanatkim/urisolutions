#include <stdio.h>

int main()
{

    int a, i = 0, p = 0, po = 0, n = 0, im = 0;
    while (i < 5)
    {
        scanf("%d", &a);
        if (a < 0)
        {
            n++;
            a = a + a * 2;
            if (a % 2 == 0)
            {
                p++;
            }
            else
            {
                im++;
            }
        }
        else if (a > 0)
        {
            if (a % 2 == 0)
            {
                p++;
                po++;
            }
            else
            {
                po++;
                im++;
            }
        }
        else
        {
            p++;
        }

        i++;
    }
    printf("%d valor(es) par(es)\n", p);
    printf("%d valor(es) impar(es)\n", im);
    printf("%d valor(es) positivo(s)\n", po);
    printf("%d valor(es) negativo(s)\n", n);
}