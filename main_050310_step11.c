#include <stdio.h>
/*
https://stepik.org/lesson/54462/step/11?unit=32612
*/
int main() {
  int k, x1, x2, x3, x4, y1, y2, y3, y4;
  scanf("%d %d %d %d %d", &k, &x1, &x2, &x3, &x4);
  y1 = (x1 + k) % 26;
  y2 = (x2 + k) % 26;
  y3 = (x3 + k) % 26;
  y4 = (x4 + k) % 26;
  printf("%d %d %d %d", y1, y2, y3, y4);
  return 0;
}

