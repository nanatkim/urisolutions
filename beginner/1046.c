#include <stdio.h>

int main()
{

    int a, b, c = 0, d;
    scanf("%d%d", &a, &b);

    if (a > b)
    {
        c = a - 24;
        d = b - c;
        printf("O JOGO DUROU %d HORA(S)\n", d);
    }
    else if (a == b)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else
    {
        c = b - a;
        printf("O JOGO DUROU %d HORA(S)\n", c);
    }
}