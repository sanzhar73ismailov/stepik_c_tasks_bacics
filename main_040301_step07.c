#include <stdio.h>
/*
https://stepik.org/lesson/41457/step/7?unit=30905
*/
int main() {
  double a, b, c, p;
  scanf("%lf %lf %lf", &a, &b, &c);
  p = (a + b + c) / 2;
  double s = sqrt(p * (p - a) * (p - b) * (p - c));
  printf("%.2lf", s);
  return 0;
}
