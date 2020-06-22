#include <stdio.h>
/*
https://stepik.org/lesson/54462/step/12?unit=32612
*/
int main() {
  int x, d1, d2, d3, d4;
  scanf("%d", &x);
  d1 = x / 1000 % 10;
  d2 = x / 100 % 10;
  d3 = x / 10 % 10;
  d4 = x / 1 % 10;
  printf("%d%d%d%d", (d3 + 7) % 10, (d4 + 7) % 10, (d1 + 7) % 10, (d2 + 7) % 10);
  return 0;
}

