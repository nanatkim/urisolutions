#include <stdio.h>

int main() {
  float a, b, c, d, sub1, p1, p2, sub2, rz1, rz2, x;
  scanf("%f%f%f%f", &a, &b, &c, &d);

  sub1 = a - c;
  sub2 = b - d;
  p1 = powf(sub1, 2);
  p2 = powf(sub2, 2);
  rz1 = p1 + p2;
  rz2 = sqrtf(rz1);

  printf("%.4f\n", rz2);
}