#include <stdio.h>

int main()
{

    float sal, s, r;
    scanf("%f", &sal);

    if (sal >= 0 && sal <= 400)
    {
        r = sal * 0.15;
        s = sal + r;
        printf("Novo salario: %.2f\n", s);
        printf("Reajuste ganho: %.2f\n", r);
        printf("Em percentual: 15 %%\n");
    }
    else if (sal > 400 && sal <= 800)
    {
        r = sal * 0.12;
        s = sal + r;
        printf("Novo salario: %.2f\n"), s;
        printf("Reajuste ganho: %.2f\n", r);
        printf("Em percentual: 12 %%\n");
    }
    else if (sal > 800 && sal <= 1200)
    {
        r = sal * 0.10;
        s = sal + r;
        printf("Novo salario: %.2f\n", s);
        printf("Reajuste ganho: %.2f\n", r);
        printf("Em percentual: 10 %%\n");
    }
    else if (sal > 1200 && sal <= 2000)
    {
        r = sal * 0.07;
        s = sal + r;
        printf("Novo salario: %.2f\n", s);
        printf("Reajuste ganho: %.2f\n", r);
        printf("Em percentual: 7 %%\n");
    }
    else if (sal > 2000)
    {
        r = sal * 0.04;
        s = sal + r;
        printf("Novo salario: %.2f\n", s);
        printf("Reajuste ganho: %.2f\n", r);
        printf("Em percentual: 4 %%\n");
    }
}