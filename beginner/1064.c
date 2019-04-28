#include <stdio.h>

int main()
{
    float a, i = 0, p = 0, m = 0;
    while (i < 6)
    {
        scanf("%f", &a);
        if (a > 0)
        {
            p++;
            m = m + a;
        }
        i++;
    }
    m = m / p;
    printf("%.0f valores positivos\n", p);
    printf("%.1f\n", m);
}