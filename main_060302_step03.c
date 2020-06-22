#include <stdio.h>
/*
https://stepik.org/lesson/57425/step/3?unit=35201
*/

int main() {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  printf("%d", ((a > 0) + (b > 0) + (c > 0)));
  return 0;
}