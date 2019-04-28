#include <stdio.h>

int main()
{
    int a, i;
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        if (i == a)
        {
            printf("Ho!\n");
        }
        else
        {
            printf("Ho ");
        }
    }

    return 0;
}