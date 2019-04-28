#include <stdio.h>

int main()
{

    int a, b, maior = 0, menor = 0, s = 0, aux = 0, i = 0;
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        maior = a;
        menor = b;
    }
    else if (b > a)
    {
        maior = b;
        menor = a;
    }
    else
    {
        s = 0;
    }
    while (i != 1)
    {
        menor++;
        if (menor == maior)
        {
            i++;
        }
        else if (menor < maior)
        {
            if (menor < 0)
            {
                aux = menor + menor * 2;
                if (aux % 2 != 0)
                {
                    s += menor;
                }
            }
            else if (menor % 2 != 0)
            {
                s += menor;
            }
        }
        else if (maior < menor)
        {
            //s = 0;
            i++;
        }
    }
    printf("%d\n", s);

    return 0;
}