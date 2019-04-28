#include <stdio.h>

int main()
{
    int a, b, i;
    char n[50][20];
    scanf("%d", &a);
    for (i = 0; i < a; i++)
    {
        scanf("%s %d", &n[i], &b);
    }
    for (i = 0; i < a; i++)
    {
        if (strcmp(n[i], "Thor") == 0)
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }

    return 0;
}