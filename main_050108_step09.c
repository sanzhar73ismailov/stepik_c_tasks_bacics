#include <stdio.h>

/*
https://stepik.org/lesson/53872/step/9?unit=32085
*/
int main() {
  int n;
  scanf("%d", &n);
  double res, x, y;
  x = n/10%10 * n/1000%10;
  y = n/1%10 * n/100%10;
  printf("%.2lf", (double)x / y);
  return 0;
}
