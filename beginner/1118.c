#include <stdio.h>

int main()
{

    float a, b = -1, c = 0, p = 0;
    int x = 0, i = 0;
    while (x != 2)
    {
        while (i != 2)
        {
            scanf("%f", &a);
            if (a >= 0 && a <= 10)
            {
                i++;
                //	printf("valor de a %f\n",a);
                while (b < 0 || b > 10)
                {
                    scanf("%f", &b);
                    if (b >= 0 && b <= 10)
                    {
                        //	printf("valor de b %f\n",b);
                        i++;
                    }
                    else
                    {
                        printf("nota invalida\n");
                    }
                }
            }
            else
            {
                printf("nota invalida\n");
            }
            if (i == 2)
            {
                c = (a + b) / 2;
                //printf("%f %f\n",a,b);
                printf("media = %.2f\n", c);
                //p++;
            }
        }

        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &x);
        if (x == 1)
        {
            i = 0;
            c = 0;
            a = -1;
            b = -1;
        }
    }

    return 0;
}