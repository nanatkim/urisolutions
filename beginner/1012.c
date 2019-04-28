#include <stdio.h>

int main()
{
    float a, b, c, v, w, x, y, z;
    scanf("%f%f%f", &a, &b, &c);

    v = (a * c) / 2;
    w = 3.14159 * (powf(c, 2));
    x = (c * (a + b)) / 2;
    y = b * b;
    z = a * b;

    printf("TRIANGULO: %.3f\n", v);
    printf("CIRCULO: %.3f\n", w);
    printf("TRAPEZIO: %.3f\n", x);
    printf("QUADRADO: %.3f\n", y);
    printf("RETANGULO: %.3f\n", z);
}