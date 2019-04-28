#include <stdio.h>

int main()
{
    int i, d = 0;
    float media, idade, soma = 0;
    for (i = 0; i != 1;)
    {
        scanf("%f", &idade);
        if (idade > 0)
        {
            soma += idade;
            d++;
        }
        else
        {
            i++;
        }
    }
    media = soma / d;
    printf("%.2f\n", media);

    return 0;
}