#include <stdio.h>

int main()
{

    int n, x, i, a = 0, b = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x >= 10 && x <= 20)
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    printf("%d in\n", a);
    printf("%d out\n", b);
}