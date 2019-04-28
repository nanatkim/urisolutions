#include <stdio.h>

int main()
{

    int a, b, i = 0, c = 0, inter = 0, grem = 0, emp = 0, x;
    while (i != 1)
    {
        if (x == 2)
        {
            i++;
        }
        else
        {
            c++;
            scanf("%d%d", &a, &b);
            if (a == b)
            {
                emp++;
            }
            else if (a > b)
            {
                inter++;
            }
            else if (b > a)
            {
                grem++;
            }
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d", &x);
        }
    }
    printf("%d grenais\n", c);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", grem);
    printf("Empates:%d\n", emp);
    if (inter > grem)
    {
        printf("Inter venceu mais\n");
    }
    else if (grem > inter)
    {
        printf("Gremio venceu mais\n");
    }
    else
    {
        printf("Nao houve vencedor\n");
    }

    return 0;
}