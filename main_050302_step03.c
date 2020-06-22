#include <stdio.h>
/*
https://stepik.org/lesson/54462/step/2?unit=32612
*/
int main() {
  int f, d;
  scanf("%d %d", &f, &d);
  printf("%d'%d\" = %.2lf", f, d, (f * 12 + d) * 25.4 / 1000);
  return 0;
}

