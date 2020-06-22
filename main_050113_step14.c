#include <stdio.h>
#include <math.h>

/*
https://stepik.org/lesson/53872/step/14?unit=32085
*/

int main() {
  double x;
  scanf("%lf", &x);
  double a = 1 + x + pow(x, 2)/2 + pow(x, 3)/6 + pow(x, 4)/24 + pow(x, 5)/120;
  printf("%.6lf\n%.6lf", exp(x), a);
  return 0;
}
