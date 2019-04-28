#include <stdio.h>

int main()
{
    float s = 0.0, n = 1.0, x, c;
    for (x = 1; x <= 39; x += 2)
    {
        c = x / n;
        s += c;
        n *= 2;
    }

    printf("%.2f\n", s);

    return 0;
}