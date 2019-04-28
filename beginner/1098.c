#include <stdio.h>

int main()
{
    float i = 0;
    while (i < 2)
    {
        if (i == 0 || i == 1)
        {
            printf("I=%.0f J=%.0f\n", i, i + 1);
            printf("I=%.0f J=%.0f\n", i, i + 2);
            printf("I=%.0f J=%.0f\n", i, i + 3);
        }
        else
        {
            printf("I=%.1f J=%.1f\n", i, i + 1);
            printf("I=%.1f J=%.1f\n", i, i + 2);
            printf("I=%.1f J=%.1f\n", i, i + 3);
        }
        i += 0.2;
    }
    printf("I=%.0f J=%.0f\n", i, i + 1);
    printf("I=%.0f J=%.0f\n", i, i + 2);
    printf("I=%.0f J=%.0f\n", i, i + 3);

    return 0;
}