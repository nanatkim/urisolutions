#include <stdio.h>

int main()
{
    int n, i;
    double s, b, a, x, y, z, p, q, r, ss = 0, sb = 0, sa = 0, sd = 0, bd = 0, ad = 0;
    scanf("%d", &n);
    char nome[1000];

    for (i = 0; i < n; i++)
    {
        scanf("%s", &nome);
        scanf("%lf%lf%lf", &x, &y, &z);
        scanf("%lf%lf%lf", &p, &q, &r);
        ss += x;
        sd += p;
        sb += y;
        bd += q;
        sa += z;
        ad += r;
    }
    s = (100 * sd) / ss;
    b = (100 * bd) / sb;
    a = (100 * ad) / sa;
    printf("Pontos de Saque: %.2lf %c.\n", s, 37);
    printf("Pontos de Bloqueio: %.2lf %c.\n", b, 37);
    printf("Pontos de Ataque: %.2lf %c.\n", a, 37);

    return 0;
}