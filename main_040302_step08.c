#include <stdio.h>
/*
https://stepik.org/lesson/41457/step/8?unit=30905
*/
int main(void) {
  double a, b, c, d, e, f, h, res;
  scanf("%lf %lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f, &h);
  res = a/(b*(c/(d*(e/(f*h)))));  
  printf("%.2f", res);

  return 0;
}
