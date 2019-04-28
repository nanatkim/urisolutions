#include <stdio.h>

int main()
{

    int n, i, sc = 0, sr = 0, ss = 0, x, t = 0;
    char animal[5];
    float pc, pr, ps, a, b, c;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %s", &x, animal);
        if (strcmp(animal, "C") == 0)
        {
            sc += x;
            a += x;
        }
        else if (strcmp(animal, "R") == 0)
        {
            sr += x;
            b += x;
        }
        else if (strcmp(animal, "S") == 0)
        {
            ss += x;
            c += x;
        }
    }
    t = sc + sr + ss;
    printf("Total: %d cobaias\n", t);
    printf("Total de coelhos: %d\n", sc);
    printf("Total de ratos: %d\n", sr);
    printf("Total de sapos: %d\n", ss);
    pc = (a * 100) / t;
    pr = (b * 100) / t;
    ps = (c * 100) / t;
    printf("Percentual de coelhos: %.2f \%%\n", pc);
    printf("Percentual de ratos: %.2f \%%\n", pr);
    printf("Percentual de sapos: %.2f \%%\n", ps);
}