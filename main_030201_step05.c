#include <stdio.h>
/*
https://stepik.org/lesson/40318/step/5?unit=30908
*/
int main(void) {
  int a, b, res;

  scanf("%d", &a);
  scanf("%d", &b);

  res = a + b;

  int c;

  scanf("%d", &c);
  res = res - c;

  printf("%d\n", res);
  return 0;
}

