#include <stdio.h>

int main()
{

    int n, i;
    float n1, n2, n3;
    scanf("%d", &n);
    float m[n];
    for (i = 0; i < n; i++)
    {
        scanf("%f%f%f", &n1, &n2, &n3);
        m[i] = (n1 * 2 + n2 * 3 + n3 * 5) / 10;
    }
    for (i = 0; i < n; i++)
    {
        printf("%.1f\n", m[i]);
    }
}