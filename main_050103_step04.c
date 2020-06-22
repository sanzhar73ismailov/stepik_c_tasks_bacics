#include <stdio.h>

/*
https://stepik.org/lesson/53872/step/4?unit=32085
*/
int main() {
  int s, m, h;
  scanf("%d", &s);
  h = s / 60 / 60;
  m = (s -  h * 60 * 60) / 60;
  printf("%d %d", h, m);
  return 0;
}
