#include <stdio.h>

int main()
{

    int a, b, c = 0;
    scanf("%d%d", &a, &b);

    if (a > b)
    {
        c = a % b;
        if (c == 0)
        {
            printf("Sao Multiplos\n");
        }
        else
        {
            printf("Nao sao Multiplos\n");
        }
    }

    if (a < b)
    {
        c = b % a;
        if (c == 0)
        {
            printf("Sao Multiplos\n");
        }
        else
        {
            printf("Nao sao Multiplos\n");
        }
    }
}