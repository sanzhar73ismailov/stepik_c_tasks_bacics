#include <stdio.h>

/*
https://stepik.org/lesson/53161/step/9?unit=31258
*/
int main() {
  int N;
  scanf("%d", &N);
  int res = rand() % N + 1;
  printf("%d", res);
  return 0;
}
