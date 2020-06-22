#include <stdio.h>
/*
https://stepik.org/lesson/54462/step/13?unit=32612
*/
int main() {
  int x, d1, d2, d3, d4;
  scanf("%d", &x);
  d1 = (x / 1000 % 10 + 3) % 10;
  d2 = (x / 100 % 10 + 3) % 10;
  d3 = (x / 10 % 10 + 3) % 10;
  d4 = (x / 1 % 10 + 3) % 10;
  printf("%d%d%d%d", d3, d4, d1, d2);
  return 0;
}

