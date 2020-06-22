#include <stdio.h>

/*
https://stepik.org/lesson/53161/step/10?unit=31258
*/
int main() {
  int s, e;
  scanf("%d %d", &s, &e);
  int res = s + rand() % (s - e + 1);
  printf("%d", res);
  return 0;
}
