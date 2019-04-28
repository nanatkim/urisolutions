#include <stdio.h>

int main()
{
    int x, i, j;
    char a[10001];
    float sum;
    scanf("%d", &x);
    for (i = 0; i < x; i++)
    {
        sum = 0;
        scanf("%s", &a);
        for (j = 0; j < strlen(a); j++)
        {
            sum += 0.01;
        }
        printf("%.2f\n", sum);
    }

    return 0;
}