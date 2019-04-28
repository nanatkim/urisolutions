#include <stdio.h>

int main()
{

    int a, b, c = 0, d, m1, m2, m, s;
    scanf("%d%d%d%d", &a, &m1, &b, &m2);

    if (a == b && m1 == m2)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else if (a >= b && m2 >= m1)
    {
        c = a - 24;
        d = b - c;
        m = m2 - m1;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", d, m);
    }
    else if (a >= b && m1 >= m2)
    {
        c = a - 24;
        d = b - c;
        s = 60 - m1;
        m = s + m2;
        d = d - 1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", d, m);
    }
    else if (a <= b && m1 >= m2)
    {
        c = b - a;
        s = 60 - m1;
        m = s + m2;
        c--;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", c, m);
    }
    else if (a <= b && m1 <= m2)
    {
        c = b - a;
        m = m2 - m1;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", c, m);
    }
}