#include <stdio.h>

int main()
{
    int qtp, qtd, i, prod[5];
    float p = 0;
    scanf("%d", &qtp);
    for (i = 0; i < qtp; i++)
    {
        scanf("%d%d", &prod[i], &qtd);
        if (prod[i] == 1001)
        {
            p += 1.50 * qtd;
        }
        else if (prod[i] == 1002)
        {
            p += 2.50 * qtd;
        }
        else if (prod[i] == 1003)
        {
            p += 3.50 * qtd;
        }
        else if (prod[i] == 1004)
        {
            p += 4.50 * qtd;
        }
        else if (prod[i] == 1005)
        {
            p += 5.50 * qtd;
        }
    }
    printf("%.2f\n", p);

    return 0;
}