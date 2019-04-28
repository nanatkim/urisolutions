#include <stdio.h>

int main()
{

    float i, n, p;
    for (i = 1; i <= 6; i++)
    {
        scanf("%f", &n);
        if (n > 0)
        {
            p++;
        }
    }
    printf("%.0f valores positivos\n", p);
}