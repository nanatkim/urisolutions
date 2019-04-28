#include <stdio.h>

int main()
{
    int x, a, b, y, z;
    scanf("%d%d%d%d%d", &x, &a, &b, &y, &z);
    if (x == 1)
    {
        if ((a + b) % 2 == 0)
        {
            if (y == 1)
            {
                if (z == 1)
                {
                    printf("Jogador 2 ganha!\n");
                }
                else
                {
                    printf("Jogador 1 ganha!\n");
                }
            }
            else
            {
                printf("Jogador 1 ganha!\n");
            }
        }
        else
        {
            if (y == 1)
            {
                if (z == 1)
                {
                    printf("Jogador 2 ganha!\n");
                }
                else
                {
                    printf("Jogador 1 ganha!\n");
                }
            }
            else
            {
                printf("Jogador 2 ganha!\n");
            }
        }
    }
    else
    {
        if ((a + b) % 2 == 0)
        {
            if (y == 1)
            {
                if (z == 1)
                {
                    printf("Jogador 2 ganha!\n");
                }
                else
                {
                    printf("Jogador 1 ganha!\n");
                }
            }
            else
            {
                printf("Jogador 2 ganha!\n");
            }
        }
        else
        {
            if (y == 1)
            {
                if (z == 1)
                {
                    printf("Jogador 2 ganha!\n");
                }
                else
                {
                    printf("Jogador 1 ganha!\n");
                }
            }
            else
            {
                printf("Jogador 1 ganha!\n");
            }
        }
    }

    return 0;
}