#include <stdio.h>
#include <math.h>

int main()
{
    int T, i;

    scanf("%d", &T);

    for (i = 0; i < T; ++i)
    {
        int pA, pB, years = 0;
        double g1, g2;

        scanf("%d %d", &pA, &pB);

        scanf("%lf %lf", &g1, &g2);
        g1 /= 100.0;
        g2 /= 100.0;

        while (pA <= pB && years <= 100)
        {
            pA += pA * g1;
            pB += pB * g2;
            ++years;
        }

        if (years > 100)
            puts("Mais de 1 seculo.");
        else
            printf("%d anos.\n", years);
    }

    return 0;
}