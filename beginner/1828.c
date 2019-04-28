#include <stdio.h>

int main()
{
    int a, i;
    char s[101][10], r[101][10];
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        scanf("%s%s", &s[i], &r[i]);

        if (strcmp(r[i], s[i]) == 0)
        {
            printf("Caso #%d: De novo!\n", i);
        }
        else
            //sheldon ganha
            if (strcmp(s[i], "tesoura") == 0 && (strcmp(r[i], "papel") == 0 || strcmp(r[i], "lagarto") == 0))
        {
            printf("Caso #%d: Bazinga!\n", i);
        }
        else if (strcmp(s[i], "papel") == 0 && (strcmp(r[i], "Spock") == 0 || strcmp(r[i], "pedra") == 0))
        {
            printf("Caso #%d: Bazinga!\n", i);
        }
        else if (strcmp(s[i], "pedra") == 0 && (strcmp(r[i], "tesoura") == 0 || strcmp(r[i], "lagarto") == 0))
        {
            printf("Caso #%d: Bazinga!\n", i);
        }
        else if (strcmp(s[i], "lagarto") == 0 && (strcmp(r[i], "papel") == 0 || strcmp(r[i], "Spock") == 0))
        {
            printf("Caso #%d: Bazinga!\n", i);
        }
        else if (strcmp(s[i], "Spock") == 0 && (strcmp(r[i], "tesoura") == 0 || strcmp(r[i], "pedra") == 0))
        {
            printf("Caso #%d: Bazinga!\n", i);
        }
        else
        {
            printf("Caso #%d: Raj trapaceou!\n", i);
        }
    }

    return 0;
}