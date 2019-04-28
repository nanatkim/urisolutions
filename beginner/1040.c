#include <stdio.h>

int main()
{
    float a, b, c, d, media, exame;
    scanf("%f%f%f%f", &a, &b, &c, &d);

    media = (a * 2 + b * 3 + c * 4 + d) / 10;

    if (media >= 7)
    {
        printf("Media: %.1f\n", media);
        printf("Aluno aprovado.\n");
    }
    else if (media < 5)
    {
        printf("Media: %.1f\n", media);
        printf("Aluno reprovado.\n");
    }
    else if (media >= 5 && media < 7)
    {
        printf("Media: %.1f\n", media);
        printf("Aluno em exame.\n");

        scanf("%f", &exame);
        media = (media + exame) / 2;

        if (media >= 5)
        {
            printf("Nota do exame: %.1f\n", exame);
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", media);
        }
        else if (media < 5)
        {
            printf("Nota do exame: %.1f\n", exame);
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", media);
        }
    }
}