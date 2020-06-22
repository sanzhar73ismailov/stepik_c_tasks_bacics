#include <stdio.h>

/*
https://stepik.org/lesson/53872/step/7?unit=32085
*/
int main() {
  int m, n;
  scanf("%d %d", &m, &n);
  printf("%d %d", m/n % 10,  m * 10 / n % 10);
  return 0;
}
