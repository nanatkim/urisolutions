#include <stdio.h>

int main()
{
    int x, i, num[1001], c2 = 0, c3 = 0, c4 = 0, c5 = 0;
    scanf("%d", &x);
    for (i = 0; i < x; i++)
    {
        scanf("%d", &num[i]);
        if (num[i] % 2 == 0)
        {
            c2++;
        }
        if (num[i] % 3 == 0)
        {
            c3++;
        }
        if (num[i] % 4 == 0)
        {
            c4++;
        }
        if (num[i] % 5 == 0)
        {
            c5++;
        }
    }
    printf("%d Multiplo(s) de 2\n", c2);
    printf("%d Multiplo(s) de 3\n", c3);
    printf("%d Multiplo(s) de 4\n", c4);
    printf("%d Multiplo(s) de 5\n", c5);

    return 0;
}