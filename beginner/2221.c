#include <stdio.h>

int main()
{
    int i, a1, a2, d1, d2, l1, l2, b, x;
    float dab, gu;
    scanf("%d", &x);
    for (i = 0; i < x; i++)
    {
        scanf("%d", &b);
        scanf("%d%d%d", &a1, &d1, &l1);
        scanf("%d%d%d", &a2, &d2, &l2);
        dab = ((a1 + d1) / 2);
        gu = ((a2 + d2) / 2);

        if (l1 % 2 == 0 && l2 % 2 == 0)
        {
            dab += b;
            gu += b;
        }
        else if (l2 % 2 == 0)
        {
            gu += b;
        }
        else if (l1 % 2 == 0)
        {
            dab += b;
        }

        if (dab == gu)
        {
            printf("Empate\n");
        }
        else if (dab > gu)
        {
            printf("Dabriel\n");
        }
        else
        {
            printf("Guarte\n");
        }
    }

    return 0;
}