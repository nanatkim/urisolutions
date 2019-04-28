#include <stdio.h>

int main()
{

    int senha, i = 0;
    for (; i != 1;)
    {
        scanf("%d", &senha);
        if (senha != 2002)
        {
            printf("Senha Invalida\n");
        }
        else
        {
            printf("Acesso Permitido\n");
            i++;
        }
    }
    return 0;
}