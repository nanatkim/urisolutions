#include <stdio.h>

int main()
{

    float a, b = -1, c = 0, i = 0;
    while (i != 2)
    {
        scanf("%f", &a);
        if (a >= 0 && a <= 10)
        {
            i++;
            //printf("valor de a %f\n",a);
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
    }
    c = (a + b) / 2;
    //printf("%f %f\n",a,b);
    printf("media = %.2f\n", c);

    return 0;
}