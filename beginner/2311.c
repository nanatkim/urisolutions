#include <stdio.h>

int main()
{
    int x, i, n, j;
    double score[7], s, d, maior, menor;
    scanf("%d", &n);
    char nome[1000];
    for (i = 0; i < n; i++)
    {
        s = 0;
        scanf("%s", nome);
        setbuf(stdin, NULL);
        scanf("%lf", &d);
        for (j = 0; j < 7; j++)
        {
            scanf("%lf", &score[j]);
            s += score[j];
        }
        menor = score[0];
        maior = score[0];
        for (j = 0; j < 7; j++)
        {
            if (score[j] < menor)
            {
                menor = score[j];
            }
            else if (score[j] > maior)
            {
                maior = score[j];
            }
        }
        for (j = 0; j < 7; j++)
        {
            if (score[j] == menor)
            {
                s -= menor;
            }
            else if (score[j] == maior)
            {
                s -= maior;
            }
        }
        s *= d;
        printf("%s %.2lf\n", nome, s);
    }

    return 0;
}