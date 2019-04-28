#include <stdio.h>

int main()
{
    int d, a, m, d1, r1, r2;
    scanf("%d", &d);

    a = d / 365;
    d = d % 365;
    m = d / 30;
    d1 = d % 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", a, m, d1);
}